#define PRINTER_H
#ifndef PRINTER_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>

typedef struct print
{
	char *print;
	void (*f)(char*, ...)
} print_t;


int _printf(const char *format, ...)
#endif
