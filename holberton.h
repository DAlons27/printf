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
	int (*printspec)(va_list);
} specifiers;

int printfiterator(const char *format, specifiers *spec, va_list args);
int printuint(va_list list);
int _printf(const char *format, ...);
int printchar(va_list list);
int printstr(va_list list);
int printint(va_list list);
int printbin(va_list list);
int printoctal(va_list list);
int printhex(va_list list);
int printhexcaps(va_list list);
int _putchar(char c);
#endif
