#include "printer.h"

/**
 *format_to_function - takes a character as an argument and 
 *returns a pointer to the needed function
 *@format: the type of data that needs to be printed
 *which is determined by finding the chacters s/d/i in the printf statement
 *@_:
 *Return: pointer to a function
 */

int (*format_to_function(char *format))
{
	print_t array[] = {
		{"s", print_string},
		{"d", print_digit},
		{"i", print_integer},
		{NULL, NULL}
	};

	int index = 0;

	if ()/*check that there is a character that is pointed to*/
		return (NULL);

	while /*loop thru the array above until you find the*/
		/*character that matches the one in the _printf.c executable*/
	return ()/*pointer to the right function*/ 
}
