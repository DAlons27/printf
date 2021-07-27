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
	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
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
	return (0);
}
