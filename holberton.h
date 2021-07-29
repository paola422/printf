#ifndef _PRINTF
#define _PRINTF

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>



int _printf(const char *format, ...);
int (*match(const char oper))();
int printf_char(va_list c);
int printf_string(va_list s);
int printf_integer(va_list i);

int _putchar(char c);

/**
* struct format - format oper structur.
* _printf - my printf prototype.
* @oper: operators
* @f: struct
*/

typedef struct format
{
	char *oper;
	int (*f)();
} format_t;

#endif
