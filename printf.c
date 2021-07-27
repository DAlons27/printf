#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 *_printf - prints a string with specifiers
 *@format: the main string passed to the function
 *
 *Return: number of total characters printed to stdout
 */
int _printf(const char *format, ...)
{
	va_list args;
	int counter = 0;
	char *buffer;
	specifiers spec[] = {
		{"c", printchar},
		{"s", printstr},
		{"d", printint},
		{"i", printint},
		{"b", printbin},
		{"u", printuint},
		{"o", printoctal},
		{"x", printhex},
		{"X", printhexcaps},
                {NULL, NULL}
        };
	if (format == NULL)
	  return (-1);
	
	buffer = malloc(1024);
	if (buffer == NULL)
		return (-1);
	va_start(args, format);
	counter = printfiterator(format, spec, args, buffer);
	write(1, buffer, counter);
       
	return (counter);
}
