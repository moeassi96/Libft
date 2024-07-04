# Libft - Your Very First Own Library

Libft is a C library consisting of various custom implementations of standard C library functions and additional utility functions.

## Table of Contents
1. [Introduction](#introduction)
2. [Usage](#usage)
    - [Prerequisites](#prerequisites)
    - [Installation](#installation)
    - [Compiling](#compiling)
3. [List of Functions](#list-of-functions)
    - [Characters](#Characters)
    - [Integer Conversions](#Integer-Conversions)
    - [Linked-Lists](#Linked-Lists)
    - [Memory](#Memory)
    - [Printing](#Printing)
    - [Strings](#Strings)

## Introduction

Libft is a project at 42 Beirut that aims to reinforce your understanding of C programming, particularly memory allocation, and manipulation with a custom library. This library provides solutions to common tasks such as string manipulations, memory management, and basic data structures.

## Usage

### Prerequisites

- GCC (GNU Compiler Collection)
- Make

### Installation

Clone the repository from GitHub:

```bash
git clone https://git@github.com:moeassi96/Libft.git
```

### Compiling

To compile the library, navigate to the cloned directory and use Make:

```bash
cd libft/
make
```

## List of Functions

### Characters

* `ft_isalnum`: Checks if a character is alphanumeric.
* `ft_isalpha`: Checks if a character is alphabetic.
* `ft_isascii`: Checks if a character is an ASCII character.
* `ft_isdigit`: Checks if a character is a digit.
* `ft_islower`: Checks if a character is a lower-case alphabet.
* `ft_isprint`: Checks if a character is printable.
* `ft_isspace`: Checks if a character is a space / tabs.
* `ft_isupper`: Checks if a character is an upper-case alphabet.
* `ft_tolower`: Converts a character to lower-case.
* `ft_toupper`: Converts a character to upper-case.

### Integer-Conversions

* `ft_atoi`: Converts an array of characters to an integer.
* `ft_itoa`: Converts an integer to an array of characters.

### Linked-Lists

* `ft_lstadd_back`: Adds a new node at the end of a list.
* `ft_lstadd_front`: Adds a new node at the beginning of a list.
* `ft_lstclear`: Deletes and frees all nodes in a list.
* `ft_lstdelone`: Deletes a node and frees its content.
* `ft_lstfree`: Frees all nodes in a list.
* `ft_lstiter`: Iterates over a list and applies a function to each element.
* `ft_lstlast`: Returns the last element of a list.
* `ft_lstmap`: Applies a function to each element of a list, creating a new list with the results.
* `ft_lstnew`: Allocates and returns a new list node.
* `ft_lstsize`: Counts the number of elements in a list.

### Memory

* `ft_bzero`: Sets the first n bytes of memory to zero.
* `ft_calloc`: Allocates memory for an array and initializes it to zero.
* `ft_memalloc`: Allocates memory and initializes it to zero.
* `ft_memccpy`: Copies bytes until a specific byte is found.
* `ft_memchr`: Locates the first occurrence of a byte in a byte string.
* `ft_memcmp`: Compares n bytes of two memory blocks.
* `ft_memcpy`: Copies n bytes from memory area src to memory area dest.
* `ft_memdel`: Frees memory and sets the pointer to NULL.
* `ft_memmove`: Copies n bytes from memory area src to memory area dest (handles overlapping memory).
* `ft_memset`: Fills memory with a constant byte.

### Printing

* `ft_putchar_fd`: Writes a character c to the file descriptor fd.
* `ft_putchar`: Writes a character c to standard output (stdout).
* `ft_putstr_fd`: Writes the string s to the file descriptor fd.
* `ft_putstr`: Writes the string s to standard output (stdout).
* `ft_putendl_fd`: Writes the string s followed by a newline to the file descriptor fd.
* `ft_putendl`: Writes the string s followed by a newline to standard output (stdout).
* `ft_putnbr_fd`: Writes the integer n to the file descriptor fd.
* `ft_putnbr`: Writes the integer n to standard output (stdout).
* `ft_putunsigned`: Writes the unsigned integer n to standard output (stdout).
* `ft_putaddress`: Writes the memory address ptr to standard output (stdout).
* `ft_putbase`: Converts and writes the unsigned long long integer n to standard output (stdout) using the specified base for the numerical system.

### Strings

* `ft_split`: Splits a string into an array of substrings based on a delimiter character.
* `ft_strcat`: Concatenates the string src to the end of the string dest, modifying dest.
* `ft_strncat`: Concatenates at most n characters from the string src to the end of the string dest,
                 stopping early if a null character ('\0') is encountered in src before n characters are appended.
* `ft_strlcat`: Appends the string src to the end of dest, ensuring that the total length of
                 dest does not exceed size - 1 characters (including the null-terminator).
                 Returns the total length of the concatenated string it tried to create.
* `ft_strcpy`: Copies the string src (including the null-terminator) to the memory location dest,
                overwriting any existing content in dest.
* `ft_strncpy`: Copies at most n characters from the string src to dest. If src is shorter than n characters, null characters are appended until n characters have been written.
* `ft_strlcpy`: Copies up to size - 1 characters from the string src to dst, ensuring dst is null-terminated. Returns the length of src.
* `ft_strchr`: Locates the first occurrence of a character in a string.
* `ft_strrchr`: Locates the last occurrence of a character in a string.
* `ft_strclr`: Sets every character of the string s to '\0' (null character).
* `ft_strcmp`: Compares strings s1 and s2.
* `ft_strncmp`: Compares the first n bytes of two strings.
* `ft_strdel`: Frees the memory allocated for the string *s, then sets the pointer *s to NULL.
* `ft_strdup`: Duplicates a string with malloc.
* `ft_strequ`: Lexicographically compares strings s1 and s2. Returns 1 if they are identical, 0 otherwise.
* `ft_strnequ`: Compares at most n characters of strings s1 and s2. Returns 1 if they are identical up to n characters, 0 otherwise.
* `ft_striter`: Applies the function void (*f)(char *) to each character of the string s.
* `ft_striteri`: Applies the function void (*f)(unsigned int, char *) to each character of the string s, with its index passed as the first argument to f.
* `ft_strjoin`: Concatenates two strings into a new string.
* `ft_strlen`: Computes the length of a string.
* `ft_strmap`: Applies a function to each character of the string s, creating a new string with the results.
* `ft_strnew`: Allocates memory for a new string (character array) of a specified size and initializes it with null characters ('\0'). Returns a pointer to the allocated memory, or NULL if allocation fails.
* `strstr`: Finds the first occurrence of a substring within a string and returns a pointer to it. Returns NULL if the substring is not found.
* `strnstr`: Like strstr, but limits the search to the first n characters of the string. Returns a pointer to the substring if found within the limit, otherwise returns NULL.
* `ft_substr`: Allocates and returns a substring from a string.
* `ft_strtrim`: Allocates and returns a copy of a string with specified characters trimmed from the beginning and end.