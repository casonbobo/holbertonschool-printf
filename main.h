#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>
/**
 *struct format - structure that contains and passes our args
 *@fmt: the format character to be passed in between func
 *@func: this is the output thats been collected
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
int _pow_recursion(int x, int y);
int _putchar(char c);
void test(void);
#endif
