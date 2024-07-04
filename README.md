# Libft - Your Very First Own Library

Libft is a C library consisting of various custom implementations of standard C library functions and additional utility functions.

## Table of Contents
1. [Introduction](#introduction)
2. [Usage](#usage)
    - [Prerequisites](#prerequisites)
    - [Installation](#installation)
    - [Compiling](#compiling)
3. [List of Functions](#list-of-functions)

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

* `ft_isalpha`: Checks if a character is alphabetic.
* `ft_isdigit`: Checks if a character is a digit.
* `ft_isalnum`: Checks if a character is alphanumeric.
* `ft_isascii`: Checks if a character is an ASCII character.
* `ft_isprint`: Checks if a character is printable (including space).
* `ft_strlen`: Computes the length of a string.
* `ft_memset`: Fills memory with a constant byte.
* `ft_bzero`: Sets the first n bytes of memory to zero.
* `ft_memcpy`: Copies n bytes from memory area src to memory area dest.
* `ft_memmove`: Copies n bytes from memory area src to memory area dest (handles overlapping memory).
* `ft_strlcpy`: Copies up to size - 1 characters from the string src to dst.
* `ft_strlcat`: Appends the string src to dst, copying at most size - strlen(dst) - 1 bytes.
* `ft_toupper`: Converts a lowercase letter to uppercase.
* `ft_tolower`: Converts an uppercase letter to lowercase.
* `ft_strchr`: Locates the first occurrence of a character in a string.
* `ft_strrchr`: Locates the last occurrence of a character in a string.
* `ft_strncmp`: Compares the first n bytes of two strings.
* `ft_memchr`: Locates the first occurrence of a byte in a byte string.
* `ft_memcmp`: Compares n bytes of two memory blocks.
* `ft_strnstr`: Locates a substring in a string, searching at most len characters.
* `ft_calloc`: Allocates memory for an array and initializes it to zero.
* `ft_strdup`: Duplicates a string with malloc.
* `ft_substr`: Allocates and returns a substring from a string.
* `ft_strjoin`: Concatenates two strings into a new string.
* `ft_strtrim`: Allocates and returns a copy of a string with specified characters trimmed from the beginning and end.
* `ft_split`: Splits a string into an array of substrings based on a delimiter character.
* `ft_itoa`: Converts an integer to a string.
* `ft_strmapi`: Applies a function to each character of a string to create a new string.
* `ft_striteri`: Applies a function to each character of a string with its index as argument.
* `ft_lstnew`: Allocates and returns a new list node.
* `ft_lstadd_front`: Adds a new node at the beginning of a list.
* `ft_lstsize`: Counts the number of elements in a list.
* `ft_lstlast`: Returns the last element of a list.
* `ft_lstadd_back`: Adds a new node at the end of a list.
* `ft_lstdelone`: Deletes a node and frees its content.
* `ft_lstclear`: Deletes and frees all nodes in a list.
* `ft_lstiter`: Iterates over a list and applies a function to each element.
* `ft_lstmap`: Applies a function to each element of a list, creating a new list with the results.