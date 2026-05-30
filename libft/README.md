*This project has been created as part of the 42 curriculum by aimdoyle.*

# libft
My recreation of the essential C standard library functions, built from scratch as part of the 42 curriculum. This library also includes a set of additional functions and a fully implemented linked list library!

## Description
The goal of libft is to rebuild standard C library functions from scratch, developing a deep understanding of memory management, pointers, and data structures. The library serves as a foundation for all of my future 42 projects.

## Compilation
```bash
make        # builds the libft.a
make clean  # removes all object files
make fclean # removes object files and libft.a
make re     # full rebuild 
```

## Functions
### Character checks
- `ft_isalpha` — checks if character is alphabetic
- `ft_isdigit` — checks if character is a digit
- `ft_isalnum` — checks if character is alphanumeric
- `ft_isascii` — checks if character is in ASCII table
- `ft_isprint` — checks if character is printable

### Character conversion
- `ft_toupper` — converts characters to uppercase
- `ft_tolower` — converts characters to lowercase

### String functions
- `ft_strlen` — returns length of a string
- `ft_strchr` — finds first occurrence of a character in a string
- `ft_strrchr` — finds last occurrence of a character in a string
- `ft_strncmp` — compares two strings up to n characters
- `ft_strnstr` — finds a substring within a string
- `ft_strlcpy` — copies a string with size limit
- `ft_strlcat` — concatenates a string with size limit
- `ft_strdup` — duplicates a string
- `ft_substr` — extracts a substring
- `ft_strjoin` — joins two strings into a new one
- `ft_strtrim` — trims characters from a string
- `ft_split` — splits a string by a delimiter into an array
- `ft_strmapi` — applies a function to each character of a string
- `ft_striteri` — applies a function to each character with its index

### Memory functions
- `ft_memset` — fills memory with a constant byte
- `ft_memcpy` — copies memory area
- `ft_memmove` — copies memory area and safely handles overlapping
- `ft_memchr` — searches memory for a character
- `ft_memcmp` — compares two memory areas
- `ft_bzero` — zeroes out a memory area
- `ft_calloc` — allocates and zeroes memory

### Conversion functions
- `ft_atoi` — converts a string to an integer
- `ft_itoa` — converts an integer to a string

### Output functions
- `ft_putchar_fd` — writes a character to a file descriptor
- `ft_putstr_fd` — writes a string to a file descriptor
- `ft_putendl_fd` — writes a string followed by a newline to a file descriptor
- `ft_putnbr_fd` — writes an integer to a file descriptor

### Linked list functions
- `ft_lstnew` — creates a new node
- `ft_lstadd_front` — adds a node to the front of the list
- `ft_lstadd_back` — adds a node to the back of the list
- `ft_lstsize` — returns the number of nodes in the list
- `ft_lstlast` — returns the last node of the list
- `ft_lstdelone` — frees a single node
- `ft_lstclear` — frees all nodes in the list
- `ft_lstiter` — applies a function to each node's content
- `ft_lstmap` — creates a new list and applies a function to each node

## Resources
### Documentation
- [C Man Pages](https://man7.org/linux/man-pages/index.html) — official C standard library documentation
- [42 libft subject PDF](https://cdn.intra.42.fr/pdf/pdf/198605/en.subject.pdf) — project requirements

### Videos
- [Calloc in C](https://www.youtube.com/watch?v=l8DU9ZeT3o8&t=221s)
- [Understanding and implementing Linked Lists in C](https://www.youtube.com/watch?v=VOpjAHCee7c)
- [Dynamic Memory Allocation using calloc](https://www.youtube.com/watch?v=8q0jLDun0_0)
- [C Basics](https://www.youtube.com/watch?v=SC8uWXmDJs4)
- [Creating strcat](https://www.youtube.com/watch?v=rMOF82jCq4o&t=239s)

### Books
K.N. King — *C Programming: A Modern Approach, Second Edition*

### AI usage
Claude AI was used throughout this project as a learning and teaching tool. It was used to explain concepts that were new or ambiguous to me such as pointers, double pointers, linked list traversal, memory management, and function pointers. However, Claude was not used to write my code. All functions were written and debugged by me.

### Other
My fellow students at 42! Which has definitely been the biggest help on my journey so far.

## Author
Aimée.