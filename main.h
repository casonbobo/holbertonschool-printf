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

int _printf (const char *format, ...);
/*accepts a character pointer from printf and calls formatFilter*/
/*all accepts ANY argument sent to it by format_to_functions*/
int formatFilter ();
/*accepts the type of format determined by formatFilter and returns*/
/*a pointer to the correct function in an array held inside printFunctions*/
int format_to_function (char *format);
/**/
int printFunctions ();

int printChar();
int printNum();
#endif
