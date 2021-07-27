#ifndef HOLB_H
#define HOLB_H
#include <stdarg.h>
/**
 *struct spec - printf specifiers
 *@s: character specifier
 *@printspec: function pointer to a format function
 *
 *Description: structure holds a character specifier and a format function
 */
typedef struct spec
{
	char *s;
	int (*printspec)(va_list, char *, int);
} specifiers;

int printfiterator(const char *form, specifiers *spec, va_list args, char *b);
int printuint(va_list list, char *buffer, int bi);
int _printf(const char *format, ...);
int printchar(va_list list, char *buffer, int bi);
int printstr(va_list list, char *buffer, int bi);
int printint(va_list list, char *buffer, int bi);
int printbin(va_list list, char *buffer, int bi);
int printoctal(va_list list, char *buffer, int bi);
int printhex(va_list list, char *buffer, int bi);
int printhexcaps(va_list list, char *buffer, int bi);
int _putchar(char c);
#endif
