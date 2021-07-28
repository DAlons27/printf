#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "dhk.h"

/**
 *printbin - prints an unsigned int as binary
 *@list: variadic argument list
 *
 *Return: number of characters printed to stdout
 */
char *printbin(va_list list)
{
	int bin[32];
	char *binum;
	int i = 0, j = 0;
	unsigned int num = va_arg(list, unsigned int);

	binum = malloc(33);
	if (binum == NULL)
		return (NULL);
	if (num == 0)
	{
		binum[j] = (0 + '0');
		j++;
	}
	while (num != 0)
	{
		bin[i] = (num % 2);
		i++;
		num /= 2;
	}
	for (i = i - 1; i >= 0; i--)
	{
		binum[j] = (bin[i] + '0');
		j++;
	}
	binum[j] = '\0';
	return (binum);
}

/**
 *printoctal - converts from decimal to octal
 *@list: variadic list of arguments
 *
 *Return: number of characters printed to stdout
 */
char *printoctal(va_list list)
{
	int i = 0, j = 0;
	char oct[32];
	char *octal;
	unsigned int num = va_arg(list, unsigned int);

	octal = malloc(33);
	if (octal == NULL)
		return (NULL);
	if (num == 0)
	{
		oct[i] = (0 + '0');
		i++;
	}
	while (num != 0)
	{
		oct[i] = (num % 8) + '0';
		num /= 8;
		i++;
	}
	for (i = i - 1; i >= 0; i--)
	{
		octal[j] = oct[i];
		j++;
	}
	octal[j] = '\0';
	return (octal);
}

/**
 *printhex - converts from decimal to hexadecimal
 *@list: variadic list of arguments
 *
 *Return: number of characters printed to stdout
 */
char *printhex(va_list list)
{
	int i = 0, j = 0;
	char hex[32];
	char *hexa;
	char letters[] = {'a', 'b', 'c', 'd', 'e', 'f'};
	unsigned int num = va_arg(list, unsigned int);

	hexa = malloc(33);
	if (hexa == NULL)
		return (NULL);
	if (num == 0)
	{
		hex[i] = (0 + '0');
		i++;
	}
	while (num != 0)
	{
		if ((num % 16) > 9)
			hex[i] = (letters[(num % 16) % 10]);
		else
			hex[i] = (num % 16) + '0';
		i++;
		num = num / 16;
	}
	for (i = i - 1; i >= 0; i--)
	{
		hexa[j] = hex[i];
		j++;
	}
	hexa[j] = '\0';
	return (hexa);
}

/**
 *printhexcaps - converts from decimal to hexadecimal using capital letters
 *@list: variadic list of arguments
 *
 *Return: number of characters printed to stdout
 */
char *printhexcaps(va_list list)
{
	int i = 0, j = 0;
	char hex[32];
	char *hexa;
	char letters[] = {'A', 'B', 'C', 'D', 'E', 'F'};
	unsigned int num = va_arg(list, unsigned int);

	hexa = malloc(33);
	if (hexa == NULL)
		return (NULL);
	if (num == 0)
	{
		hex[i] = (0 + '0');
		i++;
	}
	while (num != 0)
	{
		if ((num % 16) > 9)
			hex[i] = (letters[(num % 16) % 10]);
		else
			hex[i] = (num % 16) + '0';
		i++;
		num = num / 16;
	}

	for (i = i - 1; i >= 0; i--)
	{
		hexa[j] = hex[i];
		j++;
	}
	hexa[j] = '\0';
	return (hexa);
}
