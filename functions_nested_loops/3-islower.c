#include "main.h"

/**
 * _islower - Checks if a character is lowercase.
 * @c: The character to check.
 *
 * Description: This function checks if the given character `c`
 * is a lowercase letter (from 'a' to 'z').
 *
 * Return: 1 if the character is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
