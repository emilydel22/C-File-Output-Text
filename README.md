# C-File-Output-Text

![Language](https://img.shields.io/badge/language-C-blue)
![Focus](https://img.shields.io/badge/focus-File%20I%2FO%20%26%20Debugging-brightgreen)
![Tools](https://img.shields.io/badge/tools-Code%3A%3ABlocks%20%7C%20GCC-lightgrey)

A small collection of **C programs demonstrating file input/output** and basic debugging workflows in **Code::Blocks**.  
Includes: creating/writing a text file, reading a text file line-by-line, and dumping file contents in **hex + ASCII** format.

---

## What’s Included

### 1) Create + write a file (`test.txt`)
- Prints the **working directory** at runtime (so you know exactly where Code::Blocks outputs files)
- Creates `test.txt` in that folder and writes formatted lines + timestamp
- Uses: `fopen`, `fprintf`, `fclose`, `_getcwd`, `ctime`

### 2) TextDump (read file & print to console)
- Prompts for a filename and prints each line to the console
- Uses: `fopen`, `fgets`, basic loop control

### 3) HexDump (16-byte blocks)
- Prompts for a file path/name and prints:
  - file offsets (addresses)
  - hex bytes
  - ASCII view (`.` for non-printable)
- Uses: `fread`, `isprint`, `putchar`

---

## Files
- `main 8.c` — creates/writes `test.txt` and prints runtime working directory (Windows)
- `main 8.2.c` — **TextDump** (line-by-line console output)
- `main 8.3.c` — **HexDump** (hex + ASCII dump)
- `README.md` — this file
- `1.jpg`, `2.jpg`, `3.jpg` — screenshots (code/output)

---

## How to Run (Code::Blocks)
1. Open the `.c` file you want to run.
2. Build & Run.
3. For **TextDump / HexDump**, type the file name (or full path) when prompted.

> **Note (Windows):** `main 8.c` uses `_getcwd` from `<direct.h>` to display the exact directory where `test.txt` is created.

---

## Concepts Demonstrated
- File creation & writing (`fopen`, `fprintf`, `fclose`)
- Reading text files (`fgets`)
- Reading binary blocks (`fread`)
- Hex formatting & ASCII display (`%02X`, `isprint`)
- Timestamp output (`time`, `ctime`)
- Working directory debugging (`_getcwd`)


