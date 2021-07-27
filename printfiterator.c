#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include "holberton.h"
/**
 *printfiterator - loops through and decides which specifier to use
 *@form: the format string to be printed
 *@spec: the array of structures that identify the specifier functions
 *@args: the va__list argument list for the variadic function
 *@b: buffer to add characters to
 *Return: the number of characters printed to stdout
 */
int printfiterator(const char *form, specifiers *spec, va_list args, char *b)
{
	int fi, bi = 0, si;

	for (fi = 0; form != NULL && form[fi] != '\0'; fi++)
	{
		if (form[fi] == '\\')
		{
			fi++;
			b[bi] = form[fi];
			bi++;
		}
		if (form[fi] == '%')
		{
			fi++;
			if (form[fi] == '%')
			    {
				b[bi] = '%';
				bi++;
			    }
			else
				for (si = 0; spec[si].s != NULL; si++)
					if (*(spec[si].s) == form[fi])
					{
						bi = (spec[si].printspec)(args, b, bi);
						break;
					}
		}
		else
		{
