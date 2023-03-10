#include "main.h"
#include <unistd.h>
/**
 *_putchar - for the construction of printf
 *@c: pull the char c to print the single character
 *Return: Return the printed char after running the func
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
