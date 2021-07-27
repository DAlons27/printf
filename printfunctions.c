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

int printintd(va_list list)
{
	int tens = 1;
	int num = va_arg(list, int);
	int tensit = num;
	int counter = 0;

	if ( num < 0)
	{
		num *= -1;
		_putchar('-');
		tensit *= -1;
	}
	while (num != 0)
	{
		num = num / 10;
		tens *= 10;
	}
	while (tens != 0)
	{
		_putchar((tensit / tens) + '0');
		tensit %= tens;
		tens /= 10;
		counter++;
