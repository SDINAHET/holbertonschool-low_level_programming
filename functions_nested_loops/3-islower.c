#include "main.h"

/**
* _islower(int c) - return 1 if c lowercase otherwise 0
* _islower - Checks if a character is lowercase.
* @c: The character to check.
* main - check the code
* Description: function thats checks for lowercase character
* _islower detect lowercase
* Return: void
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
