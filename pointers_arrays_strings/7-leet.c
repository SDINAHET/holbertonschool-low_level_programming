#include "main.h"

/**
* leet - Encodes a string into 1337.
* @str: The string to be encoded.
*
* Return: A pointer to the encoded string.
*/
char *leet(char *str)
{
	char *ptr = str;
	char letters[] = "aAeEoOtTlL";
	char leet[] = "4433007711";

	while (*ptr != '\0')
	{
		for (int i = 0; i < 10; i++)
		{
			if (*ptr == letters[i])
			{
				*ptr = leet[i];
				break; // No need to check the rest of the letters
			}
		}
		ptr++;
	}
	return (str);
}
