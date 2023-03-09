#include "main.h"

/**
 *Bank of functions
 *@arrPtr: array pointer that points to the right array
 */

int printChar(va_list list, int *arrPtr)
{
	while (arrPtr != '\0' && index != '%' && /*numbers*/)
	{
		_putchar(arrPtr);
		index++;
	}
}


int printNum(va_list list2, int *arrPtr)
{
	while(arrPtr != '\0' && index != '%' && /*letters*/)
	{
		_putchar(arrPtr + '0');
		index++;
	}
}
