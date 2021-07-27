#include <unistd.h>
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
int printfiterator(const char *format, specifiers *spec, va_list args, char *b)
{
	int fi, bi = 0, si;

	for (fi = 0; format[fi] != '\0'; fi++)
	{
		if (format[fi] == '\\')
		{
			fi++;
			b[bi] = format[fi];
			bi++;
		}
		if (format[fi] == '%')
		{
			fi++;
			for (si = 0; spec[si].s != NULL; si++)
			{
				if (*(spec[si].s) == format[fi])
				{
			 	bi = (spec[si].printspec)(args, b, bi);
					break;
				}
			}
			if (spec[si].s == NULL)
				return (-1);
		}
		else
		{
			b[bi] = format[fi];
			bi++;
		}
	}
	va_end(args);
	return (bi);
}
