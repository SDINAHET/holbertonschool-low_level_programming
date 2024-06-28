#include "main.h"
#include <limits.h>

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
		/* Check for overflow and underflow */
		if (result > (INT_MAX - (*s - '0')) / 10)
		{
			if (sign == 1)
				return (INT_MAX);  /*Return INT_MAX on overflow*/
			else
				return (INT_MIN);  /*Return INT_MIN on underflow*/
		}
		result = result * 10 + (*s - '0');
		s++;
	}

	return (result * sign);
}
