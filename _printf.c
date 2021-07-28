#include "holberton.h"

/**
 * _printf - prints a string with all given arguments
 * @format: a string of characters with some calls to other arguments
 *
 * Return: the length of the printed string
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int i, n, len = 0;
	unsigned long int u;
	char *sf, *str;
	void *ptr;

	va_start(ap, format);

	for (i = 0; i < _strlen(format); i++)
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'c':
					sf = va_arg(ap, char *);
					write(1, &sf, 1);
					len++;
					break;
				case 's':
					sf = va_arg(ap, char *);
					write(1, sf, _strlen(sf));
					len += _strlen(sf);
					break;
				case '%':
					sf = "%";
					write(1, sf, _strlen(sf));
					len++;
					break;
				case 'd':
					n = va_arg(ap, int);
					print_number(n);
					len += ndigits(n);
					break;
				case 'i':
					n = va_arg(ap, int);
					print_number(n);
					len += ndigits(n);
					break;
				case 'b':
					u = va_arg(ap, unsigned int);
					sf = convert(u, 2);
					write(1, sf, _strlen(sf));
					len += _strlen(sf);
					break;
				case 'o':
					u = va_arg(ap, unsigned int);
					sf = convert(u, 8);
					write(1, sf, _strlen(sf));
					len += _strlen(sf);
					break;
				case 'X':
					u = va_arg(ap, unsigned int);
					sf = convert(u, 16);
					write(1, sf, _strlen(sf));
					len += _strlen(sf);
					break;
				case 'x':
					u = va_arg(ap, unsigned int);
					sf = convert(u, 16);
					for (n = 0; n < _strlen(sf); n++)
					{
						if (*(sf + n) >= 'A' && *(sf + n) <= 'Z')
						{
							*(sf + n) = *(sf + n) + 32;
						}
					}
					write(1, sf, _strlen(sf));
					len += _strlen(sf);
					break;
				case 'u':
					u = va_arg(ap, unsigned int);
					print_unumber(u);
					len += nudigits(u);
					break;
				case 'S':
					sf = va_arg(ap, char *);
					if (sf)
					{
					for (n = 0; n < _strlen(sf); n++)
					{
						if ((*(sf + n) > 0 && *(sf + n) < 32) || (*(sf + n) >= 127))
						{
							str = convert(*(sf + n), 16);
							_putchar('\\');
							_putchar('x');
							if (_strlen(str) < 2)
								_putchar('0');
							write(1, str, _strlen(str));
							n++;
							len += 2;
						}
						_putchar(*(sf + n));
					}
					len += _strlen(sf);
					}
					break;
				case 'p':
					ptr = va_arg(ap, void *);
					if (ptr == NULL)
					{
						write(1, "(nil)", 5);
						len += 5;
					}
					else
					{
						u = (unsigned long int)ptr;
						str = "0x";
						sf = convert(u, 16);
						for (n = 0; n < _strlen(sf); n++)
						{
							if (*(sf + n) >= 'A' && *(sf + n) <= 'Z')
							{
								*(sf + n) = *(sf + n) + 32;
							}
						}
						write(1, str, 2);
						write(1, sf, _strlen(sf));
						len += (2 + _strlen(sf));
					}
					break;
				case 'r':
					sf = va_arg(ap, char *);
					str = reverse(sf);
					write(1, str, _strlen(str));
					len += _strlen(str);
					free(str);
					break;
				case 'R':
					sf = va_arg(ap, char *);
					str = ROT13(sf);
					write(1, str, _strlen(str));
					len += _strlen(str);
					free(str);
					break;
				default:
					_putchar('%');
					_putchar(format[i + 1]);
					break;
			}
			i += 1;
		}
		else
		{
			_putchar(format[i]);
			len++;
		}
	}
	va_end(ap);
	return (len);
}
