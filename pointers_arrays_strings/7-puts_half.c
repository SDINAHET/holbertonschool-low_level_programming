#include "main.h"

/**
* puts_half - Prints half of a string, followed by a new line.
* @str: The string to print the second half of.
*/
void puts_half(char *str)
{
	int length = _strlen(str);
	int start;

	if (length % 2 == 0)
	{
		start = length / 2;
	}
	else
	{
		start = (length - 1) / 2;
	}

	while (str[start] != '\0')
	{
		_putchar (str[start]);
		start++;
	}

	_putchar ('\n');  /* Print a newline at the end */
}
