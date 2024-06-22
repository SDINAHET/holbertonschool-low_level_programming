#include "main.h"

/**
* _isalpha - Checks if a character is an alphabetic character.
* @c: The character to check.
*
* Description: This function checks if the given character `c`
* is an alphabetic character (either lowercase or uppercase).
*
* Return: 1 if the character is a letter, lowercase or uppercase, 0 otherwise.
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
