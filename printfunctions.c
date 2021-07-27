#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include "holberton.h"

/**
 *printchar - prints a character
 *@list: variadic list of arguments
 *@buffer: buffer array to add characters to
 *@bi: buffer index
 *Return: number of characters printed
 */
int printchar(va_list list, char *buffer, int bi)
{
	buffer[bi] = (va_arg(list, int));
	bi++;
	return (bi);
}

/**
 *printstr - prints a string
 *@list: variadic list of arguments
 *@buffer: buffer array to add characters to
 *@bi:buffer index
 *
 *Return: number of characters printed
 */
int printstr(va_list list, char *buffer, int bi)
{
	int i = 0;
	char *str;
	int counter = 0;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "(null)";
	while (str[i] != '\0')
	{
		buffer[bi] = str[i];
		i++;
		bi++;
	}
	return (bi);
}

/**
 *printint - prints an integer
 *@list: variadic list of arguments
 *@buffer: buffer array to add characters to
 *@bi: buffer index
 *Return: number of characters printed to stdout
 */
int printint(va_list list, char *buffer, int bi)
{
	int tens = 1;
	int num = va_arg(list, int);
	int tensit = num;

	if (num < 0)
	{
		num *= -1;
		buffer[bi] = '-';
		tensit *= -1;
		bi++;
	}
	while (num != 0)
	{
		num = num / 10;
		tens *= 10;
	}
	tens /= 10;

	while (tens != 0)
	{
		buffer[bi] = ((tensit / tens) + '0');
		tensit = tensit % tens;
		tens /= 10;
		bi++;
	}
	return (bi);
}
/**
 *printuint - prints an unsigned int
 *@list: variadic argument list
 *@buffer: buffer array to add characters to
 *@bi; buffer index
 *Return: number of characters printed to stdout
 */

int printuint(va_list list, char *buffer, int bi)
{
	unsigned int tens = 1;
	unsigned int num = va_arg(list, unsigned int);
	unsigned int tensit = num;

        while (num != 0)
        {
		num = num / 10;
		tens *= 10;
      	}
	tens /= 10;
	while (tens != 0)
	{
		buffer[bi] = ((tensit / tens) + '0');
		tensit = tensit % tens;
		tens /= 10;
		bi++;
	}
	return (bi);
}
