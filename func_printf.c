#include "holberton.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}


/**
 * _strlen - returns the length of a string.
 * @s: a string of characters
 *
 * Return: the length of the string s
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * print_number - prints any numbre without using printf
 * @n: number to print
 * Return: void
 */

void print_number(int n)
{
unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
	{
		num = n;
	}
	if (num / 10)
	{
		print_number(num / 10);
	}
	_putchar(num % 10 + '0');
}

/**
 * ndigits - returns the number of digits of n
 * @n: number
 *
 * Return: dg
 */

int ndigits(int n)
{
	int dg = 1;

	if (n < 0)
	{
		dg++;
		n = -n;
	}
	while (n / 10 > 0)
	{
		n /= 10;
		dg++;
	}
	return (dg);
}

/**
 * convert - converts a number to any base
 * @num: number to convert
 * @base: base to convert to
 *
 * Return: ptr, number converted
 */

char *convert(unsigned long int num, int base)
{
	static const char n[] = "0123456789ABCDEF";
	static char buffer[50];
	char *ptr;

	ptr = &buffer[49];
	*ptr = '\0';

	do {
		*--ptr = n[num % base];
		num /= base;
	} while (num != 0);
	return (ptr);
}
