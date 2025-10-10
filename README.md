# Resident Evil: Code Veronica (Dreamcast)
This is a matching decompilation of Resident Evil: Code Veronica (US).
Currently it's set up for building 1ST_READ.bin (the main executable).

# Setup
- The splitter requires sh4dis and pyyaml (and python)
```
pip install sh4dis
```
- Obtain Katana r11, and the folders /Include, /Dev/Hitachi, /Lib
- Put /Include in the repo
- put /Dev/Hitachi's contents in shc/bin
- put /Lib's contents in shc/lib
- Obtain and extract the rom for Resident Evil: Code Veronica (US) for the Dreamcast
- Put 1ST_READ.BIN (make sure the extension is exactly .BIN - case sensitive) in the "rom" folder in the repo
- Run "make setup"

# Extra info
This project has been created using Exant64's Sonic Adventure 2 decompilation repo (sa2dc) as a template, so some rightful credits to him.

Todo:
- Identify at least a couple of game functions using the PS2 version debugging symbols as reference to fill out symbols.1st_read.txt.
- The chosen version of the Dreamcast API (Katana 11) is just a bare guess, try to pin-point the exact SDK number and SHC compiler as well.
- Optimize dcsplit.py a bit more as it currently takes too long to setup.