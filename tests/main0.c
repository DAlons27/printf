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
	printf("\n");
	printf("THE REAL PRINTF\n");
	printf(NULL);
	printf("Character:[%c]\n", 'H');
	printf("String:[%s]\n", "I am a string!");
	printf("%%s should not print a string\n");
	printf("%%s\n", "Hello");
	printf("% %s\n", "Hello");
	printf("%%%\n");
	printf("%%\n");
	printf("%  %\n");
	printf("%zzzzc\n");
	printf("%;;;;;;c\n");
	printf("%%c\n", 'H');
	printf("%z is not a combination\n");
	printf("\"This is quote\"\n");
	printf("Spaces:[%       c]\n", 'H');
	printf("\n");


	printf("OUR PRINTF\n");
	_printf(NULL);
	_printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string!");
	_printf("%%s should not print a string\n");
	_printf("%%s\n", "Hello");
	_printf("% %s\n", "Hello");
	_printf("%%%\n");
	_printf("%%\n");
	_printf("%  %\n");
	_printf("%zzzzc\n");
	_printf("%;;;;;;c\n");
	_printf("%%c\n", 'H');
	_printf("%z is not a combination\n");
	_printf("\"This is quote\"\n");
	_printf("Spaces:[%       c]\n", 'H');
}
