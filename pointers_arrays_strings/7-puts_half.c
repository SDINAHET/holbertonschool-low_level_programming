#include "main.h"

/**
* puts_half - Prints half of a string, followed by a new line.
* @str: The string to print the second half of.
*/
void puts_half(char *str)
{
	int length_of_the_string = _strlen(str);
	int n;

	if (length_of_the_string % 2 == 0)
	{
		n = length_of_the_string / 2;
	}
	else
	{
		n = (length_of_the_string - 1) / 2;
	}

	while (str[n] != '\0')
	{
		_putchar (str[n]);
		length_of_the_string++;
	}

	_putchar ('\n');  /* Print a newline at the end */
}
