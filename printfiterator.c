#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
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
	int fi, bi = 0, si, sti = 0;
	char *str;

	for (fi = 0; form [fi] != '\0' ; fi++)
	{

		if (form[fi] == '%' && form[fi + 1]) != '\0')
		{
			fi++;
			while (form[fi] == ' ' && form != '\0')
				fi++;

			if (form[fi] != ' ')
			    {
				for (si = 0; spec[si].s != NULL; si++)					if (*(spec[si].s) == form[fi])
					{
			      	str = (spec[si].printspec)(args);
				if (str == NULL)
				    return (-1);

				sti = 0;
				while (str[sti] != '\0')
				  {

			       	b[bi] = str[sti];
				sti++;
				bi++;
				  }
			free (str);
			break;
		    		}
				if (spec[si].s == NULL)
				  {
				    b[bi++] = '%';
				    if (form[fi] != '%')
				      b[bi++] = form[fi];
				  }
			    }
		    }
		else
		{
		  b[bi] = form[fi];
			bi++;
		}
	}
	return (bi);
}
