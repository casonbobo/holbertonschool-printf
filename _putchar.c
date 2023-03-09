#include "main.h"
#include <unistd.h>

/*
 *putchar for the construction of printf
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
