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
	char *(*printspec)(va_list);
} specifiers;

int formats(const char *form, specifiers *spec, va_list args, char *b, int *bi);
int printfbufferoverflow(char *buffer);
char *printuint(va_list list);
int _printf(const char *format, ...);
char *printchar(va_list list);
char *printstr(va_list list);
char *printint(va_list list);
char *printbin(va_list list);
char *printoctal(va_list list);
char *printhex(va_list list);
char *printhexcaps(va_list list);
int _putchar(char c);
#endif
