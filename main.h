#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>

 /**
  * struct format - structure that contains va_list
  * @char: character
  * @func: this is the output thats been collected
  */

typedef struct format
{
	char *fmt;
	int (*func)(va_list ap);
} format_t;

/* prototypes */

int _printf(const char *format, ...);
int pick_func(va_list ap, char c);
int print_char(va_list ap);
int print_str(va_list ap);
int print_int(va_list ap);
int print_unsigned_int(unsigned int n);
int _putchar(char c);
#endif
