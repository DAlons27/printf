#include <stdarg.h>
#include <stdio.h>
#include "holberton.h"
/**
 *printfiterator - loops through and decides which specifier to use
 *@format: the format string to be printed
 *@spec: the array of structures that identify the specifier functions
 *@args: the va__list argument list for the variadic function
 *
 *Return: the number of characters printed to stdout
 */
int printfiterator(const char *format, specifiers *spec, va_list args)
{
        int i, j, counter = 0;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '\\')
		{
			i++;
			_putchar(format[i]);
		}
		if (format[i] == '%')
		{
			i++;
			for (j = 0; spec[j].s != NULL; j++)
			{
				if (*(spec[j].s) == format[i])
				{
					counter += (spec[j].printspec)(args);
					break;
				}
			}
			if (spec[j].s == NULL)
				return (-1);
		}
		else
		{
			_putchar(format[i]);
			counter++;
		}
	}
	va_end(args);
	return (counter);
}
