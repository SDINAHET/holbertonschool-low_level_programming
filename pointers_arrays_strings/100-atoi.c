#include "main.h"

/**
* _atoi - Converts a string to an integer.
* @s: The string to convert.
*
* Return: The integer value of the string.
*/
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;

	/*Skip non-digit characters and track the sign*/
	while (*s)
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			break;
		}
		s++;
	}

	/*Convert characters to integer*/
	while (*s >= '0' && *s <= '9')
	{
		result = result * 10 + (*s - '0');
		s++;
	}

	return (result * sign);
}
