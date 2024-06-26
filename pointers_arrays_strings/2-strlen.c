#include "main.h"

/**
* _strlen - returns the length of a string
* @s: pointer to the string
*
* Return: length of the string
*/
int _strlen(char *s)
{
	int length = 0;

/* Iterate over the string until the null terminator is reached*/
	while (s[length] != '\0')
 /* The null terminator '\0' marks the end of the string */
	{
		length++;
	}
	return (length);
}
