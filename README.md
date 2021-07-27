# Printf

### Objective:

* Recreate the C library printf

### Requirements:

* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
* All your files should end with a new line
* A README.md file, at the root of the folder of the project is mandatory
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* You are not allowed to use global variables
* No more than 5 functions per file
* In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
* The prototypes of all your functions should be included in your header file called holberton.h
* Don’t forget to push your header file
* All your header files should be include guarded
* Note that we will not provide the _putchar function for this project

## _putchar

* This function prints an individual character (similar to standard library putchar)

## printf

* The core function where the buffer is defined and freed. All other functions are called from here

## holberton.h

* Header file that contains prototypes for all the functions and a struct holding a function and a character

## man_3_printf

* Custom man page Create a man page for your function.