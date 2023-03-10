#include "main.h"

/**
 *print_char - print characters
 *@ap: va_list that holds arguments from main function
 *Return: number of characters printed
 */

int print_char(va_list ap)
{
	_putchar(va_arg(ap, int));
	return (1);
}

/**
 *print_str - prints strings
 *@ap: va_list that holds arguments from main function
 *Return: number of characters printed
 */

int print_str(va_list ap)
{
	char *str = va_arg(ap, char *);
	int i;

	if (str == NULL)
	str = "(null)";
	
		else
		{
			for (i = 0; str[i], i++)
				_putchar(str[i]);
		}
		return (i);
}

/**
 *print_int - prints integers 
 *@ap: va_list that holds arguments from main function
 *Return: number of integers printed
 */

int print_int(va_list ap)
{
	int n;

	n = va_arg(ap, int);
	if (n < 0)
	{
		_putchar('-');
		return (print_unsigned_int(-n) + 1);
	}
	return (print_unsigned_int(n));
}

/*PUT OTHER FUNCTIONS FOR LATER STUFF BElOW HERE*/
