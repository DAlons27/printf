#include <stdio.h>
#include <stdarg.h>
#include "holberton.h"

/**
 *printchar - prints a character
 *@list: variadic list of arguments
 *
 *Return: number of characters printed
 */
int printchar(va_list list)
{
	int counter = 0;

	_putchar(va_arg(list, int) + '0');
	counter++;
	return (counter);
}

/**
 *printstr - prints a string
 *@list: variadic list of arguments
 *
 *Return: number of characters printed
 */
int printstr(va_list list)
{
	int i = 0;
	char *str;
	int counter = 0;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "(null)";
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
		counter++;
	}
	return (counter);
}
