#include "main.h"

/**
* puts_half - Prints half of a string, followed by a new line.
* @str: The string to print the second half of.
*/
void puts_half(char *str)
{
	int length = _strlen(str);
	int n;

	if (length % 2 == 0)
	{
		n = length / 2;
	}
	else
	{
		n = (length - 1) / 2;
	}

	while (str[n] != '\0')
	{
		_putchar (str[n]);
		n++;
	}

	_putchar ('\n');  /* Print a newline at the end */
}
