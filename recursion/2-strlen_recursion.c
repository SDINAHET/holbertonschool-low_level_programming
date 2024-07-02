#include "main.h"

/**
* _strlen_recursion - Returns the length of a string
* @s:  The string to calculate the length of
*
* Return: The lenght of the string
*/
int _strlen_recursion(char *s)
{
	if (*s != '\0')  /* If the current character is not null */
/* if (*s) */
/* if (*s > '\0') */
/* if (*s != '\0' */
	{
		return (1 + _strlen_recursion(s + 1)); /* call with the next character */
	}
	else  /* if (*s == '\0') */
		return (0);
}
