*This project has been created as part of the 42 curriculum by mchauvin.*

# libft

## Description

**libft** is my own C library, built from scratch as the foundation for the rest of the 42 curriculum. It reimplements a selection of standard C library functions, adds a set of utility functions for strings and file descriptors, and provides a small linked-list API as a bonus.

The library compiles into a static archive, `libft.a`, with `-Wall -Wextra -Werror`.

### Contents

**Libc reimplementations**
- Character checks and conversion: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`
- Strings: `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`
- Memory: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`
- Conversion: `ft_atoi`

**Additional functions**
- Strings: `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`, `ft_strmapi`, `ft_striteri`
- Output to a file descriptor: `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

**Bonus: singly linked lists**
- `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`, `ft_lstsize`, `ft_lstlast`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

## Instructions

### Compilation

```sh
make            # builds libft.a (mandatory part)
make bonus      # adds the linked-list functions to libft.a
make clean      # removes object files
make fclean     # removes object files and libft.a
make re         # rebuilds everything
```

### Usage

Include the header in your code:

```c
#include "libft.h"
```

Then compile your program against the archive:

```sh
cc -Wall -Wextra -Werror main.c -L. -lft -o my_program
```

## Resources

- Linux manual pages for the reimplemented functions, e.g. `man 3 strlcpy`, `man 3 memmove`
- [The C Programming Language](https://en.wikipedia.org/wiki/The_C_Programming_Language), Kernighan and Ritchie
