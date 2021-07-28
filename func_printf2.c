#include "holberton.h"

/**
 * print_unumber - prints a positive number
 * @n: number to print
 *
 * Return: void
 */

void print_unumber(unsigned int n)
{
	if (n / 10)
	{
		print_number(n / 10);
	}
	_putchar(n % 10 + '0');
}

/**
 * nudigits - returns the number of digits of unsigned n
 * @n: number
 *
 * Return: dg
 */

int nudigits(unsigned int n)
{
	int dg = 1;

	while (n / 10 > 0)
	{
		n /= 10;
		dg++;
	}
	return (dg);
}

/**
 * reverse - reverses a string
 * @str: a string
 *
 * Return: The reversed string
 */
char *reverse(char *str)
{
	int i, n = _strlen(str);
	char *rev, r2;

	rev = malloc((n + 1) * sizeof(char));
	for (i = 0; i < n; i++)
	{
		r2 = str[n - i - 1];
		rev[i] = r2;
	}
	rev[i] = '\0';
	return (rev);
}

/**
 * ROT13 - encrypts a string with ROT13 method
 * @str: a string
 *
 * Return: a string in ROT13 encryption
 */
char *ROT13(char *str)
{
	int i, j, n = _strlen(str), m;
	char alph[] = "abcdefghijklmnopqrstuvwxyzabcdefghijklm";
	char ALPH[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *str13 = malloc((n + 1) * sizeof(char));

	m = _strlen(alph) - 13;
	for (i = 0; i < n; i++)
	{
		if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
		{
			for (j = 0; j < m; j++)
			{
				if (str[i] == alph[j])
					str13[i] = alph[j + 13];
				if (str[i] == ALPH[j])
					str13[i] = ALPH[j + 13];
			}
		}
		else
		{
			str13[i] = str[i];
		}
	}
	str13[i] = '\0';
	return (str13);
}
