#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "dhk.h"

/**
 *formats - loops through and decides which specifier to use
 *@form: the format string to be printed
 *@spec: the array of structures that identify the specifier functions
 *@args: the va_list argument list for the variadic function
 *@b: buffer to add characters to
 *@bi: buffer index
 *
 *Return: the number of characters printed to stdout
 */
int formats(const char *form, specifiers *spec, va_list args, char *b, int *bi)
{
	int fi, si, sti = 0, totalcount = 0;
	char *str;

	for (fi = 0; form[fi] != '\0'; fi++)
	{
		if (form[fi] == '%' && form[fi + 1] != '\0')
		{
			fi++;
			while (form[fi] == ' ' && form != '\0')
				fi++;

			for (si = 0; spec[si].s != NULL; si++)
				if (*(spec[si].s) == form[fi])
				{
					str = (spec[si].printspec)(args);
					if (str == NULL)
						return (-1);
					sti = 0;
					while (str[sti] != '\0')
					{
						b[*bi] = str[sti];
						if (*bi == 1024)
						{
							totalcount += printfbufferoverflow(b);
							*bi = 0;
						}
						else
						{
							sti++;
							(*bi)++;
						}
					}
					free(str);
					break;
				}
			if (spec[si].s == NULL)
			{
				b[*bi] = '%';
				if (*bi == 1024)
				{
					totalcount += printfbufferoverflow(b);
					*bi = 0;
				}
				else
					(*bi)++;
				if (form[fi] != '%')
				{
					b[*bi] = form[fi];
					if (*bi == 1024)
					{
						totalcount += printfbufferoverflow(b);
						*bi = 0;
					}
					else
						(*bi)++;
				}
			}
		}
		else
		{
			b[*bi] = form[fi];
			if (*bi == 1024)
			{
				totalcount += printfbufferoverflow(b);
				*bi = 0;
			}
			else
				(*bi)++;
		}
	}
	totalcount = totalcount + *bi;
	return (totalcount);
}
