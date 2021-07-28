#include <unistd.h>
#include "dhk.h"
/**
 *printfbufferoverflow - prints the buffer if the number of characters is 1024
 *@buffer: the buffer to print the contents of
 *
 *Return: 1024 since that is the amount of characters printed
 */
int printfbufferoverflow(char *buffer)
{
	write(1, buffer, 1024);
	return (1024);
}
