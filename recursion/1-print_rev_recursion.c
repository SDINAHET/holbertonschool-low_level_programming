#include "main.h"

/**
* _print_rev_recursion - Prints a string in reverse
* @s: The string to be printed in reverse
*/
void _print_rev_recursion(char *s)
{
	if (*s)  /* If the current character is not null */
	{
		_print_rev_recursion(s + 1);  /* Recursively call with the next character */
		_putchar(*s);  /* Print the current character */
	}
}
