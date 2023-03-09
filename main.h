#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>
 /**
 *struct printInput - is a stucture to
 *collect the stdout to print
 *@out: this is the output thats been collected
 */

typedef struct printInput
{
	char *out;
} print_t;


int _printf(const char *format, ...);
int _putchar(char c);
#endif
