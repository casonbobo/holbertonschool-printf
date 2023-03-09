#define MAIN_H
#ifndef MAIN_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>

typedef struct print
{
	char *print;
	void (*f)(char*, ...)
} print_t;

/*int arrPtr - is a pointer to a spot in the array held in format_to_functions*/
int _printf (const char *format, ...);
int formatFilter (int *format);
int format_to_function (int *function);
int printFunctions (int *arrPtr)
#endif
