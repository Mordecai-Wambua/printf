#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

#define BUFFERSIZE 1024

int _printf(const char *format, ...);

typedef struct format
{
	char *specifier;
	int (*f)(va_list);
}
format_t;
int c_printer(va_list);
int p_printer(va_list);
int s_printer(va_list);

#endif
