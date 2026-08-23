#include <cctype>
#include <cstdlib>
#include <iostream>
#include <string>
#include <string_view>

namespace {

inline char ascii_upper(char c) {
    return (c >= 'a' && c <= 'z') ? static_cast<char>(c - ('a' - 'A')) : c;
}

bool ieq(std::string_view a, std::string_view b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i)
        if (ascii_upper(a[i]) != ascii_upper(b[i])) return false;
    return true;
}

bool istarts(std::string_view s, std::string_view prefix) {
    if (s.size() < prefix.size()) return false;
    return ieq(s.substr(0, prefix.size()), prefix);
}

std::string_view trim_view(std::string_view s) {
    size_t b = 0, e = s.size();
    while (b < e && std::isspace(static_cast<unsigned char>(s[b]))) ++b;
    while (e > b && std::isspace(static_cast<unsigned char>(s[e - 1]))) --e;
    return s.substr(b, e - b);
}

void append_hex_converted(std::string& out, std::string_view in) {
    out.reserve(out.size() + in.size());
    for (size_t i = 0; i < in.size();) {
        if (i + 2 <= in.size() && ascii_upper(in[i]) == 'H' && in[i + 1] == '\'' &&
            i + 2 < in.size() && std::isxdigit(static_cast<unsigned char>(in[i + 2]))) {
            out += "0x";
            i += 2;
            while (i < in.size() && std::isxdigit(static_cast<unsigned char>(in[i])))
                out.push_back(in[i++]);
        } else {
            out.push_back(in[i++]);
        }
    }
}

std::string hex_converted(std::string_view in) {
    std::string out;
    append_hex_converted(out, in);
    return out;
}

bool parse_fr(std::string_view s, size_t& p, std::string_view& reg) {
    while (p < s.size() && std::isspace(static_cast<unsigned char>(s[p]))) ++p;
    size_t start = p;
    if (p + 2 > s.size() || ascii_upper(s[p]) != 'F' || ascii_upper(s[p + 1]) != 'R') return false;
    p += 2;
    size_t digits = p;
    while (p < s.size() && std::isdigit(static_cast<unsigned char>(s[p]))) ++p;
    if (p == digits) return false;
    reg = s.substr(start, p - start);
    return true;
}

bool convert_fmov_reg_reg(std::string_view raw, std::string& out) {
    for (size_t i = 0; i + 6 <= raw.size(); ++i) {
        if (i > 0) {
            unsigned char prev = static_cast<unsigned char>(raw[i - 1]);
            if (std::isalnum(prev) || raw[i - 1] == '_') continue;
        }
        if (!ieq(raw.substr(i, 6), "FMOV.S")) continue;
        size_t p = i + 6;
        std::string_view r1, r2;
        if (!parse_fr(raw, p, r1)) continue;
        while (p < raw.size() && std::isspace(static_cast<unsigned char>(raw[p]))) ++p;
        if (p >= raw.size() || raw[p] != ',') continue;
        ++p;
        if (!parse_fr(raw, p, r2)) continue;
        out.assign(raw.substr(0, i));
        out += "FMOV ";
        out.append(r1.data(), r1.size());
        out.push_back(',');
        out.append(r2.data(), r2.size());
        out.append(raw.substr(p));
        return true;
    }
    return false;
}

bool parse_uint(std::string_view s, unsigned& value) {
    s = trim_view(s);
    if (s.empty()) return false;
    unsigned v = 0;
    for (char c : s) {
        if (!std::isdigit(static_cast<unsigned char>(c))) return false;
        v = v * 10u + static_cast<unsigned>(c - '0');
    }
    value = v;
    return true;
}

bool convert_line(std::string line, std::string& out, std::string& error) {
    if (!line.empty() && line.back() == '\r') line.pop_back();

    size_t semi = line.find(';');
    if (semi != std::string::npos) {
        std::string converted = line.substr(0, semi);
        if (semi + 1 < line.size()) {
            converted += " !";
            converted.append(line, semi + 1, std::string::npos);
        }
        line.swap(converted);
    }

    std::string_view s = trim_view(line);
    if (s.empty()) {
        out.clear();
        return true;
    }

    if (istarts(s, ".EXPORT") || istarts(s, ".IMPORT")) {
        bool is_export = istarts(s, ".EXPORT");
        size_t n = is_export ? 7 : 7;
        if (s.size() > n && std::isspace(static_cast<unsigned char>(s[n]))) {
            std::string_view arg = trim_view(s.substr(n));
            if (!arg.empty()) {
                out = is_export ? ".globl " : ".extern ";
                out.append(arg.data(), arg.size());
                return true;
            }
        }
    }

    if (istarts(s, ".SECTION") && s.size() > 8 && std::isspace(static_cast<unsigned char>(s[8]))) {
        std::string_view rest = trim_view(s.substr(8));
        size_t comma1 = rest.find(',');
        if (comma1 == std::string_view::npos) {
            if (!rest.empty() && rest.find_first_of(" \t\r\n,") == std::string_view::npos) {
                out = ".section ";
                out.append(rest.data(), rest.size());
                out += ieq(rest, "P") ? ",\"ax\",@progbits" : ",\"aw\",@progbits";
                return true;
            }
        } else {
            std::string_view name = trim_view(rest.substr(0, comma1));
            std::string_view after = trim_view(rest.substr(comma1 + 1));
            size_t comma2 = after.find(',');
            std::string_view kind = trim_view(after.substr(0, comma2));
            if (!name.empty() && (ieq(kind, "CODE") || ieq(kind, "DATA"))) {
                out = ".section ";
                out.append(name.data(), name.size());
                out += ieq(kind, "CODE") ? ",\"ax\",@progbits" : ",\"aw\",@progbits";
                if (comma2 != std::string_view::npos) {
                    std::string_view tail = trim_view(after.substr(comma2 + 1));
                    if (istarts(tail, "ALIGN=")) {
                        unsigned align;
                        if (parse_uint(tail.substr(6), align)) {
                            out += "\n.balign ";
                            out += std::to_string(align);
                        }
                    }
                }
                return true;
            }
        }
    }

    if (s.size() >= 7 && istarts(s, ".DATA.") &&
        (ascii_upper(s[6]) == 'B' || ascii_upper(s[6]) == 'W' || ascii_upper(s[6]) == 'L') &&
        s.size() > 7 && std::isspace(static_cast<unsigned char>(s[7]))) {
        char size = ascii_upper(s[6]);
        std::string_view val = trim_view(s.substr(7));
        size_t bang = val.find('!');
        if (bang != std::string_view::npos) val = trim_view(val.substr(0, bang));
        out = size == 'B' ? ".byte " : size == 'W' ? ".word " : ".long ";
        append_hex_converted(out, val);
        return true;
    }

    if (istarts(s, ".END") && (s.size() == 4 || std::isspace(static_cast<unsigned char>(s[4])))) {
        out.clear();
        return true;
    }

    if (s.front() == '.') {
        error = "unsupported SHC directive: " + line;
        return false;
    }

    std::string fmov;
    if (convert_fmov_reg_reg(line, fmov)) out = hex_converted(fmov);
    else out = hex_converted(line);
    return true;
}

} // namespace

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string line, out, error;
    while (std::getline(std::cin, line)) {
        if (!convert_line(std::move(line), out, error)) {
            std::cerr << error << '\n';
            return 2;
        }
        std::cout << out << '\n';
        line.clear();
    }
    return 0;
}
