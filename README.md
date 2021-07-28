# Printf
### Objective:
* Recreate the C library printf
### Requirements:
* Files should be compiled with gcc 4.8.4
* No more than 5 functions per file
* Files should end with a new line
* No global variables allowed
## _putchar
* this function prints an individual character (similar to standard library putchar)
## printf
* The core function where the buffer is defined and freed. All other functions are called from here
## printbin
* This function converts a decimal number to binary
## printoctal
* This function converts from a decimal number to octal
## printhex
* This function converts decimal numbers to hexadecimal numbers and uses lowercase letters
## printhexcaps
* This function also converts decimal numbers to hexadecimal numbers but uses capital letters
## printbufferoverflow
* In the case the buffer becomes completely full and the string is not yet fully printed. This function is called and it empties the buffer
## formats
* loops through the specifier struct array (struct defined in dhk.h) and looks to see if the character matches the a character in the specifier array (found in printf function)
## printchar
* This function is called if %c is found in the string and it prints a character
## printstr
* This function is called if %s is found in the string and it prints a string
## printint
* This function is called if %i is found in the string and it prints an integer
## printuint
* This function is called if %u is found in the string and it prints an unsigned integer
## dhk.h
* Header file that contains prototypes for all the functions and a struct holding a function and a character
## man_3_printf
* Custom man page created for our printf function

### Authors
* Diego Morey  and Giuliano Flores
