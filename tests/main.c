#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point for printf
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;
	unsigned int ui;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	ui = (unsigned int)INT_MAX + 1024;
	_printf("Let's try to do this %%s\n");
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	_printf("[%i]\n", 0x10);
	_printf("[%b]\n", 13);
	_printf("[%u]\n", -500);
	printf("[%u]\n", -500);
	_printf("[%u]\n", 500);
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	return (0);
}
