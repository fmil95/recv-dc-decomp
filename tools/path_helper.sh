# adapted from https://github.com/Exant64/sa2dc/blob/main/tools/path_helper.sh

#!/bin/bash

for i in "${@:3}"; do
    args+=("${i//\//\\}")
done

# don't replace the executable's path in the arg
# that's why $2 is separate
# (wibo doesn't recognize windows path slashes)
"$1" "$2" "${args[@]}"

return_code=$?
exit $return_code