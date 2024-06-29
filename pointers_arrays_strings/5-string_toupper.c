#include "main.h"

/**
* string_toupper - Changes all lowercase letters of a string to uppercase.
* @str: The string to be modified.
*
* Return: A pointer to the modified string.
*/
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
/*If a character is a lowercase letter (between 'a' and 'z'),*/
/* it is converted to uppercase by subtracting 32 from its ASCII value.*/
		{
			*ptr = *ptr - 32;
		}
		ptr++;
	}
	return (str);
}
