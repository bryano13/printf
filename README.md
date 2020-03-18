# _printf project for cohort 11:
Overview This is a implementation of printf function that formats and prints data

Description
The _printf function produces output according to a format which is described below. This function write its output to the stdout, the standard output stream. Returns the count of printed characters when the function is successful and -1 when the function fails.
The available convertion specifiers are:

- %c: Prints a single character.
- %s: Prints a string of characters.
- %d: Prints integers.
- %i: Prints integers.
- %b: Prints the binary representation of a decimal.
- %u: Prints unsigned integers
- %x: Prints the hexadecial representation of an unsigned decimal in lowercase letters
- %X:Prints the hexadecial representation of an unsigned decimal in uppercase letters %c: Prints a single character.
    %s: Prints a string of characters.
    %d: Prints integers.
    %i: Prints integers.

**Prototype:** ```int _printf(const char *, ...);```

## Requirements

* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 14.04 LTS
* Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
* All your files should end with a new line
* A README.md file, at the root of the folder of the project is mandatory
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* You are not allowed to use global variables
* No more than 5 functions per file
* In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push * them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might * be different from the one shown in the examples
* The prototypes of all your functions should be included in your header file called holberton.h
* Don’t forget to push your header file
* All your header files should be include guarded
* Note that we will not provide the _putchar function for this project

## Mandatory Tasks
- [x] Write function that produces output with conversion specifiers ```c```, ```s```, and ```%```.
- [x] Handle conversion specifiers ```d```, ```i```.
- [x] Create a man page for your function.
## Authors
- [Juan Felipe Bustamante](https://github.com/jfbm74)
- [Bryan Ortiz Lenis](https://github.com/bryano13)
