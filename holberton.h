#ifndef HOLB_H
#define HOLB_H
#include <stdarg.h>
/**
 *struct spec - printf specifiers
 *@s: character specifier
 *@printspec: function pointer
 *
 *Description: structure holds a character specifier
 */
typedef struct spec
{
	char *s;
	char *(*printspec)(va_list);
} specifiers;
specifiers *printfarray(void);

int printuint(va_list list);
int _printf(const char *format, ...);
int printchar(va_list list);
int printstr(va_list list);
int printint(va_list list);
int printbin(va_list list);
int printoctal(va_list list);
int _putchar(char c);
#endif
