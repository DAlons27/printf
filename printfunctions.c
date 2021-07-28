#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "dhk.h"

/**
 *printchar - prints a character
 *@list: variadic list of arguments
 *
 *Return: number of characters printed to stdout
 */
char *printchar(va_list list)
{
	char *character;
	int i = 0;

	character = malloc(2);
	if (character == NULL)
		return (NULL);
	character[i] = (va_arg(list, int));
	if (character[i] == 0)
		return (character);
	character[i + 1] = '\0';
	return (character);
}

/**
 *printstr - prints a string
 *@list: variadic list of arguments
 *
 *Return: number of characters printed to stdout
 */
char *printstr(va_list list)
{
	int i = 0;
	char *str;
	char *print;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "(null)";
	while (str[i] != '\0')
		i++;
	print = malloc(i + 1);
	if (print == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		print[i] = str[i];
		i++;
	}
	print[i] = '\0';
	return (print);
}

/**
 *printint - prints an integer
 *@list: variadic list of arguments
 *
 *Return: number of characters printed to stdout
 */
char *printint(va_list list)
{
	int tens = 1;
	int i = 0;
	int num = va_arg(list, int);
	int tensit = num;
	char *integer;

	integer = malloc(33);
	if (integer == NULL)
		return (NULL);
	if (num == 0)
	{
		integer[i] = 0 + '0';
		return (integer);
	}
	num = num / 10;
	if (tensit < 0)
	{
		integer[i] = '-';
		i++;
	}
	while (num != 0)
	{
		num = num / 10;
		tens *= 10;
	}

	while (tens != 0)
	{
		if (tensit >= 0)
			integer[i] = (tensit / tens) + '0';
		else
			integer[i] = (-1 * (tensit / tens)) + '0';
		tensit = tensit % tens;
		tens /= 10;
		i++;
	}
	integer[i] = '\0';
	return (integer);
}

/**
 *printuint - prints an unsigned int
 *@list: variadic argument list
 *
 *Return: number of characters printed to stdout
 */
char *printuint(va_list list)
{
	unsigned int tens = 1;
	unsigned int i = 0;
	unsigned int num = va_arg(list, unsigned int);
	unsigned int tensit = num;
	char *unsignedint;

	unsignedint = malloc(33);
	if (unsignedint == NULL)
		return (NULL);
	if (num == 0)
	{
		unsignedint[i] = 0 + '0';
		return (unsignedint);
	}
	num = num / 10;
	while (num != 0)
	{
		num = num / 10;
		tens *= 10;
	}

	while (tens != 0)
	{
		unsignedint[i] = ((tensit / tens) + '0');
		tensit = tensit % tens;
		tens /= 10;
		i++;
	}
	unsignedint[i] = '\0';
	return (unsignedint);
}
