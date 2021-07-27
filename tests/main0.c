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
	printf("%%d\n", 5);
	printf("");
	printf("%%%%\n");
	printf("%%%%%\n");
	printf("%        characters\n", 'c');
	printf("% \n");
	printf("%    \n");
	printf("%k\n");
	printf("%\\n");
	printf("%2\n");
	printf("%\n");
	printf("%klarkkent\n");
	printf("%c%c\n", 'A', 'A');
	printf("%s%s\n", "Hello ", "World");
	printf("%c%c%k\n", 'H', 'H');
	printf("%c%c\n", 'H', 'H');
	printf("%c%c\n", 'H');
	printf("\\\n");
	printf("\\ \n");
	printf("\\ a\n");
	printf("Character:[%c]\n", 'H');
	printf("String:[%s]\n", "I am a string!");
	printf("%%s should not print a string\n");
	printf("%%s\n", "Hello");
	printf("% %s\n", "Hello");
	printf("%%%\n");
	printf("%%\n");
	printf("%  %\n");
	printf("%kkkkc\n");
	printf("%;;;;;;c\n");
	printf("%%c\n", 'H');
	printf("%k is not a combination\n");
	printf("\"This is quote\"\n");
	printf("Spaces:[%       c]\n", 'H');
	printf("\n");


	printf("OUR PRINTF\n");
	_printf(NULL);
	_printf("%%%%\n");
	_printf("%%d\n", 5);
	_printf("");
        _printf("%%%%%\n");
	_printf("%        characters\n", 'c');
	_printf("% \n");
	_printf("%    \n");
	_printf("%k\n");
	_printf("%\\n");
	_printf("%2\n");
	_printf("%\n");
	_printf("%klarkkent\n");
	_printf("%c%c\n", 'A', 'A');
	_printf("%s%s\n", "Hello ", "World");
	_printf("%c%c%k\n", 'H', 'H');
	_printf("%c%c\n", 'H', 'H');
	_printf("%c%c\n", 'H');
	_printf("\\\n");
	_printf("\\ \n");
	_printf("\\ a\n");
	_printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string!");
	_printf("%%s should not print a string\n");
	_printf("%%s\n", "Hello");
	_printf("% %s\n", "Hello");
	_printf("%%%\n");
	_printf("%%\n");
	_printf("%  %\n");
	_printf("%kkkkc\n");
	_printf("%;;;;;;c\n");
	_printf("%%c\n", 'H');
	_printf("%k is not a combination\n");
	_printf("\"This is quote\"\n");
	_printf("Spaces:[%       c]\n", 'H');
       
}
