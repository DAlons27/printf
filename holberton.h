#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

int _putchar(char c);
int _strlen(const char *s);
int _printf(const char *format, ...);
void print_number(int n);
int ndigits(int n);
void print_unumber(unsigned int n);
int nudigits(unsigned int n);
char *convert(unsigned long int num, int base);
char *reverse(char *str);
char *ROT13(char *str);

#endif /* HOLBERTON_H */
