*This project has been created as part of the 42 curriculum by <your_42_login>.*

# Libft

## Description

Libft is my first C library project at 42. I made my own versions of useful C functions so I can use them in other projects. The library is saved as `libft.a`.

The project has three parts:

- Part 1 - Libc functions: Basic functions for characters, strings, memory, and numbers. For example, `ft_strlen`, `ft_memcpy`, `ft_atoi`, and `ft_strdup`.
- Part 2 - Additional functions: More tools for strings and output, such as `ft_split`, `ft_strjoin`, `ft_itoa`, and `ft_putstr_fd`.
- Part 3 - Linked list: Functions to create, connect, count, change, and delete nodes. These include `ft_lstnew`, `ft_lstadd_back`, `ft_lstsize`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, and `ft_lstmap`.

## Instructions

Run this command in the project folder to build the library:

```sh
make
```

Other commands:

- `make clean` - Remove object files.
- `make fclean` - Remove object files and `libft.a`.
- `make re` - Build the library again from scratch.

To use Libft in another C file, include `libft.h`. For example, to compile a test file named `main.c` in this folder:

```sh
cc -Wall -Wextra -Werror main.c -L. -lft -o test
./test
```

Run `make` first so that `libft.a` exists.

## Resources

- The 42 Libft subject
- C manual pages (`man`)
- [C reference](https://en.cppreference.com/w/c)
- [Norminette](https://github.com/42School/norminette)

I used ChatGPT to help me understand pointers and linked lists, review some code, and prepare the Makefile and README. I still need to check and test my code myself.
