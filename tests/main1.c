#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("INT_MAX:[%d]\n", INT_MAX);
	printf("INT_MAX:[%d]\n", INT_MAX);
        _printf("INT_MIN:[%d]\n", INT_MIN);
        printf("INT_MIN:[%d]\n", INT_MIN);
	_printf("INT_MAX:[%i]\n", INT_MAX);
        printf("INT_MAX:[%i]\n", INT_MAX);
        _printf("INT_MIN:[%i]\n", INT_MIN);
        printf("INT_MIN:[%i]\n", INT_MIN);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	_printf("%d\n", NULL);
	printf("%d\n", NULL);
	_printf("%d\n");
	printf("%d\n");
	_printf("Unknown:[%r]\n");
	printf("Unknown:[%r]\n");
	_printf("%d%d\n", 5, 5);
	printf("%d%d\n", 5, 5);
	_printf("%d%d\n", 5);
	printf("%d%d\n", 5);
	_printf("%d %d\n", 5, 5);
	printf("%d %d\n", 5, 5);
	_printf("%d       num\n", 5);
	printf("%d       num\n", 5);
	_printf("%i\n", 5);
	printf("%i\n", 5);
	_printf("%i\n", 0);
	printf("%i\n", 0);
	_printf("%d\n", 0);
	printf("%d\n", 0);
	return (0);
}
