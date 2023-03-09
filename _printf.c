#include "printer.h"

int _printf(const char *format, ...)
{
	int size;
	va_list list;
	char *pointer;
	char *s;

	if (format == NULL)
		return (-1);
	
	size = _strlen(format);
	
	if (size <= 0)
		return (0);

	va_start(list, format);
}
