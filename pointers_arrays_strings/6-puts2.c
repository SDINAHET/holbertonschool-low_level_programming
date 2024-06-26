#include "main.h"

/**
* puts2 - Prints every other character of a string,
* starting with the first character.
* @str: The string to print every other character from.
*/
void puts2(char *str)
{
int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)  /*Check if index is even*/
		{
			_putchar (str[i]); /*print number % 2*/
		}
		i++;
	}
	_putchar ('\n');  /*Print a newline at the end*/
}
