#include "main.h"
/**
 *pick_func - decide what func will be used based on the letter
 *@ap: a call to our list that contains the args
 *@c: the character after the '%'
 *Return: 2 or a call the func to be used
 */

int pick_func(va_list ap, char c)
{
	int i;		/*an index for deciding the func to be used */

	format_t f[] = {
		{"c", print_char},
		{"s", print_str},
		{"d", print_int},
		{"i", print_int},
	};

	for (i = 0; i < 4; i++)
		if (*f[i].fmt == c)
			return (f[i].func(ap));
	_putchar('%');
	_putchar(c);
	return (2);
}
/**
 *_printf - the main function that reads the arg and decides what will be done
 *@format: this is the format for the structure
 *Return: -1 if fail or the length of the string
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int i2 = 0, charCount = 0;	/*i2 is an second index */
					/*charCount counts the characters */

	if (format == NULL || (format[i2] == '%' && !format[i2 + 1]))
		return (-1);

	va_start(ap, format);
	for (i2 = 0; format[i2]; i2++)
	{
		if (format[i2] == '%' && (format[i2 + 1] == '%' || format[i2 + 1] == '%'))
		{
			_putchar('%');
			i2++;
			charCount++;
		}
		else if (format[i2] == '%')
		{
			charCount += pick_func(ap, format[i2 + 1]);
			i2++;
		}
		else
		{
			charCount += 1;
			_putchar(format[i2]);
		}
	}
	va_end(ap);
	return (charCount);
}
