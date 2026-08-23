# Resident Evil - Code: Veronica Decompile (Dreamcast)

<img src="https://i.imgur.com/gqroaL5.png"/> 

This is a matching decompilation of Resident Evil: Code Veronica (US).
Currently it's set up for building 1ST_READ.bin (the main executable). Check the [PS2 version decompile](https://github.com/fmil95/recvx-decomp) to see the overall progress on the reverse-engineering of the game code.

# Setup
- The splitter requires sh4dis and pyyaml (and python)
```
pip install sh4dis
```
- Extract SHC 5.1r03 into `shc`.
- Install a C++17 compiler (`g++` by default) and GNU SuperH binutils so
  `sh-elf-as`, `sh-elf-ld`, and `sh-elf-objcopy` are available in `PATH`.
- Obtain and extract the rom for Resident Evil: Code Veronica (US) for the Dreamcast
- Put 1ST_READ.BIN (make sure the extension is exactly .BIN - case sensitive) in the "rom" folder in the repo
- Run `make setup`
- Run `make`

# Extra info 
This project has been created using Exant64's Sonic Adventure 2 decompilation repo (sa2dc) as a template, so some rightful credits to him.
