#include "main.h"

/**
* _isdigit - Checks if a character is digitcase.
* @c: The character to check.
*
* Description: This function checks if the given character `c`
* is a digitcase letter (from 'a' to 'z').
*
* Return: 1 if the character is digitcase, 0 otherwise.
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
