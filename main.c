#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point 
 * main - Entry point for printf
 * Return: Always 0
 */
int main(void)
{
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");

	return (0);
}
