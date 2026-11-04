
*This project has been created as part of the 42 curriculum by zessalih.*

## Description

Libft is a custom C library that recreates standard libc functions and provides additional utilities for string manipulation, memory management, and linked lists.

The project is divided into three parts:
- **Part 1:** Libc functions
- **Part 2:** Additional functions
- **Part 3:** Linked list functions

### Library Overview

- **Character functions:** Character classification and case conversion.
- **String functions:** String manipulation, searching, comparison, and conversion.
- **Memory functions:** Memory initialization, copying, searching, and comparison.
- **Allocation functions:** Dynamic memory allocation and string creation.
- **Output functions:** Writing characters, strings, and numbers to file descriptors.
- **Linked list functions:** Creating, traversing, modifying, and freeing linked lists.

## Instructions

### Building

Run the following command to compile the library:

```bash
make
```

Other available commands:

| Command | Description |
|---|---|
| `make clean` | Remove object files. |
| `make fclean` | Remove object files and `libft.a`. |
| `make re` | Rebuild the library from scratch. |

### Usage

Include the library header in your C source file:

```c
#include "libft.h"
```

Compile your program by linking it with the library:

```bash
cc main.c libft.a -o main
```

Run the executable:

```bash
./main
```

## Resources

### References

- [C Reference](https://en.cppreference.com/w/c) — Used to consult C library functions and language behavior.
- [GNU Make Manual](https://www.gnu.org/software/make/manual/) — Used to understand Makefile rules and dependencies.
- [Stack Overflow](https://stackoverflow.com/) — Used to research specific programming questions and issues.

### AI Usage

AI was used to clarify C concepts, summarize technical information, assist with troubleshooting, and help write this README.

