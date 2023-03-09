#include "main.h"

int _printf(const char *format, ...)
{
	int f = 0;
	char *p;
	va_list clist;

	if (format == '\0')
		return (-1);

	va_start(clist, format)

	while (p[f++])
		if (p != '%')
			putchar(p(f));
	putchar('\n');
	return (0);
	va_end(clist);
}
