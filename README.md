# Get Next Line

## Introduction

The **Get Next Line** project aims to develop a function that reads a line from a file descriptor. This project is designed to deepen your understanding of file handling in a programming language and manipulate file data for effective data management and persistence.

## Features

- Reads one line at a time from a text file.
- Customizable buffer size for efficient reading.
- Demonstrates file operations including opening, reading, and closing files.

## Requirements

This project is written in C and requires the following:

- GCC compiler
- Standard C libraries

## Usage
When compiling your code, use the following command by replacing `<size>` with your desired buffer size:

```bash
gcc -Wall -Werror -Wextra -D BUFFER_SIZE=<size> get_next_line.c get_next_line_utils.c
```

## Testing

To test the implementation, simply uncomment the main function and relevant headers within the `get_next_line.c` file. Feel free to edit the test.txt file to include different content for testing various cases.

To compile and run the program, use the command below (change "xx" to your desired buffer size):

```bash
gcc -Wall -Werror -Wextra -D BUFFER_SIZE=<size> get_next_line.c get_next_line_utils.c && ./a.out
```
