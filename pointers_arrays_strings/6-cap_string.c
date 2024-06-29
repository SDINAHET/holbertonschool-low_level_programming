#include "main.h"

/**
* cap_string - Capitalizes all words of a string.
* @str: The string to be modified.
*
* Return: A pointer to the modified string.
*/
char *cap_string(char *str)
{
	char *ptr = str;
	int cap_next = 1;

	while (*ptr != '\0')
	{
		if (cap_next && *ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - 32;
		}

		if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' ||
		*ptr == ',' || *ptr == ';' || *ptr == '.' ||
		*ptr == '!' || *ptr == '?' || *ptr == '"' ||
		*ptr == '(' || *ptr == ')' || *ptr == '{' || *ptr == '}')
		{
			cap_next = 1;
		}
		else
		{
			cap_next = 0;
		}
		ptr++;
	}
	return (str);
}

/*Explanation:*/
/*The function takes a pointer to a string as its argument.*/
/*It iterates through each character in the string.*/
/*If cap_next is set to 1 and the current character */
/*is a lowercase letter (between 'a' and 'z'), */
/*it is converted to uppercase by subtracting 32 from its ASCII value.*/
/*If the current character is a word separator,*/
/*cap_next is set to 1 indicating the next character should be capitalized.*/
/*If the current character is not a separator,*/
/* cap_next is set to 0 indicating no capitalization*/
/* needed for the next character.*/
/*The function returns the pointer to the modified string.*/
