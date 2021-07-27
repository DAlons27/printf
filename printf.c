#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *_printf - prints a string
 *@format: main string passed to the function
 *
 *Return: number of total characters
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i, j, counter = 0;
	specifiers spec[] = {
		{"c", printchar},
		{"s", printstr},
		{NULL, NULL}
	};

	va_start(args, format);
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
					counter += (spec[j].printspec)(args);
			}
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
