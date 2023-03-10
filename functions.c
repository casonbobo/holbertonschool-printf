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
			for (i = 0; str[i]; i++)
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

/**
 *_pow_recursion - returns value of x^y
 *@x: int
 *@y: int to raised x to the power to
 *Return: sum of x^y
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}

/**
 *print_unsigned_int - prints unsigned integers
 *@n: unsigned integers to print
 *Return: adds 1 each recursion,
 *adding towards the number of total digits printed
 */

int print_unsigned_int(unsigned int n)
{
	int i;
	int len = 0;
	unsigned int n2 = (n / 10);

	while (n2 > 0)
	{
		len++;
		n2 = (n2 / 10);
	}

	for (i = len; i >= 0; i--)
	{
		_putchar(n / _pow_recursion(10, i) + '0');
		n = (n % _pow_recursion(10, i));
	}
	return (len);
}
