#include <stdio.h>
#include <stdarg.h>
#include "holberton.h"

/**
 *printbin - prints an unsigned int as binary
 *@list: variadic argument list
 *
 *Return: number of characters printed to stdout
 */
int printbin(va_list list)
{
	int bin[32];
	int i = 0;
	unsigned int num = va_arg(list, unsigned int);
	int counter = 0;

	while (num != 0)
	{
		bin[i] = num % 2;
		i++;
		num /= 2;
	}
	for (i = i - 1; i >= 0; i--)
	{
		_putchar(bin[i] + '0');
		counter++;
	}
	return (counter);
}

/**
 *printoctal - converts from decimal to octal
 *@list: variadic list of arguments
 *
 *Return: number of characters printed to stdout
 */
int printoctal(va_list list)
{
	int i = 0;
	unsigned int oct[32];
	unsigned int counter;
	unsigned int num = va_arg(list, unsigned int);

	while (num != 0)
	{
		oct[i] = num % 8;
		num /= 8;
		i++;
	}
	for (i = i - 1; i >= 0; i--)
	{
		_putchar(oct[i] + '0');
		counter++;
	}
	return (counter);
}

/**
 *printhex - converts from decimal to hexadecimal
 *@list: variadic list of arguments
 *
 *Return: number of characters printed to stdout
 */
int printhex(va_list list)
{
	int i = 0;
	unsigned int hex[32];
	char letters[] = {'a', 'b', 'c', 'd', 'e', 'f'};
	unsigned int counter = 0;
	unsigned int num = va_arg(list, unsigned int);

	while (num != 0)
	{
		if ((num % 16) > 9)
			hex[i] = letters[(num % 16) % 10];
		else
			hex[i] = (num % 16) + '0';
		i++;
		num = num / 16;
	}
	for (i = i - 1; i >= 0; i--)
	{
		_putchar(hex[i]);
		counter++;
	}
	return (counter);
}

/**
 *printhexcaps - converts from decimal to hexadecimal using capital letters
 *@list: variadic list of arguments
 *
 *Return: number of characters printed to stdout
 */
int printhexcaps(va_list list)
{
	int i = 0;
	unsigned int hex[32];
	char letters[] = {'A', 'B', 'C', 'D', 'E', 'F'};
	unsigned int counter = 0;
	unsigned int num = va_arg(list, unsigned int);

	while (num != 0)
	{
		if ((num % 16) > 9)
			hex[i] = letters[(num % 16) % 10];
		else
			hex[i] = (num % 16) + '0';
		i++;
		num = num / 16;
	}

	for (i = i - 1; i >= 0; i--)
	{
		_putchar(hex[i]);
		counter++;
	}
	return (counter);
}
