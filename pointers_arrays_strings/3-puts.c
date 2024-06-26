#include "main.h"

/**
* _puts - Prints a string, followed by a new line, to stdout.
* @str: The string to print.
*/
void _puts(char *str)
{
	while (*str != '\0')  /* Loop until the end of the string */
	{
		_putchar (*str);  /* Print each character */
		str++;
	}
	_putchar ('\n');  /* Print the new line at the end */
}
