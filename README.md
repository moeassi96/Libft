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

### Integer Conversions

* `ft_atoi`: Converts an array of characters to an integer.
* `ft_itoa`: Converts an integer to an array of characters.

### Linked Lists

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