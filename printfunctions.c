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

int printint(va_list list)
{
	int tens = 1;
	int num = va_arg(list, int);
	int tensit = num;
	int counter = 0;

	if (num < 0)
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
	tens /= 10;

	while (tens != 0)
	{
		_putchar((tensit / tens) + '0');
		tensit = tensit % tens;
		tens /= 10;
		counter++;
	}
	return (counter);
}
/ * *
 * printbin - imprime un int sin firmar como binario
 * @ list: lista de argumentos variadic
 *
 * Retorno: número de caracteres impresos en la salida estándar
 * /

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

int printuint(va_list list)
{
        unsigned int tens = 1;
        unsigned int num = va_arg(list, unsigned int);
        unsigned int tensit = num;
        unsigned int counter = 0;

        while (num != 0)
        {
                num = num / 10;
                tens *= 10;
        }
        tens /= 10;

        while (tens != 0)
        {
                _putchar((tensit / tens) + '0');
                tensit = tensit % tens;
                tens /= 10;
                counter++;
        }
        return (counter);
}

<<<<<<< HEAD
int printhex(va_list list)
{
	int i = 0;
	unsigned int hex[32];
	char letters[] = {'a', 'b', 'c', 'd', 'e', 'f'};
	unsigned int counter = 0;
=======
int printoctal(va_list list)
{
	int i = 0;
	unsigned int oct[32];
	unsigned int counter;
>>>>>>> fbfe6a832cecdc36d664ab8b70dbdaf1609ba41e
	unsigned int num = va_arg(list, unsigned);

	while (num != 0)
	{
<<<<<<< HEAD
		if ((num % 16) > 9)
			hex[i] = letters[(num % 16) % 10];
		else
			hex[i] = (num % 16) + '0';
		i++;
		num = num % 16;
	}

	for (i = i - 1; i >= 0; i--)
	{
		_putchar(hex[i]);
=======
		oct[i] = num % 8;
		num /= 8;
		i++;
	}
	for (i = i - 1; i >= 0; i--)
	{
		_putchar(oct[i] + '0');
>>>>>>> fbfe6a832cecdc36d664ab8b70dbdaf1609ba41e
		counter++;
	}
	return (counter);
}
<<<<<<< HEAD

int printhexcaps(va_list list)
{
        int i = 0;
        unsigned int hex[32];
        char letters[] = {'A', 'B', 'C', 'D', 'E', 'F'};
        unsigned int counter = 0;
        unsigned int num = va_arg(list, unsigned);

        while (num != 0)
        {
                if ((num % 16) > 9)
                        hex[i] = letters[(num % 16) % 10];
                else
                        hex[i] = (num % 16) + '0';
                i++;
                num = num % 16;
        }

        for (i = i - 1; i >= 0; i--)
        {
                _putchar(hex[i]);
                counter++;
        }
        return (counter);
}
=======
>>>>>>> fbfe6a832cecdc36d664ab8b70dbdaf1609ba41e
