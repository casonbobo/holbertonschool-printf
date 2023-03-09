#include "main.h"

int _printf(const char *format, ...)
{
	const char *p;
	int i = 0;
	va_list pointer;

	if (!format)
		return (-1);
	
	va_start(pointer, format);
	for (p = format; *p != NULL, p++)
	{
		if (*p != '%')
		{
			_putchar(*p, &i)
			continue;
		}
		p++;
		if (p == NULL)
      return (NULL);
		else if (p == 'c' || 's')
			return (printChar);
		else if (p == 'd' || 'i')
			return (printNum);
		else if (p == '%')
			return (printSym);
		va_end(pointer);
		return (i);
	}
}
