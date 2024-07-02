#include "main.h"

/**
* _print_rev_recursion - Prints a string in reverse
* @s: The string to be printed in reverse
*/
void _print_rev_recursion(char *s)
{
	if (*s != '\0')  /* If the current character is not null */
/* if (*s) */
/* if (*s > '\0') */
/* if (*s != '\0' */
	{
		 _print_rev_recursion(s + 1);  /* Recursively call with the next character */
		_putchar(*s);  /* Print the current character */
	}
}
#include "main.h"

/**
* _strlen_recursion - Returns the length of a string
* @s: The string to be printed in reverse
*/
int _strlen_recursion(char *s)
{
	if (*s != '\0')  /* If the current character is not null */
/* if (*s) */
/* if (*s > '\0') */
/* if (*s != '\0' */
	{
		_strlen_recursion(s + 1);  /* Recursively call with the next character */
		 _putchar(*s);  /* Print the current character */
        }
        return (s*);
}
