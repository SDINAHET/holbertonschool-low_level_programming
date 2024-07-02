#include "main.h"

/**
* _strspn - Gets the length of a prefix substring.
* @s: The initial segment of the string.
* @accept: The bytes to include in the prefix substring.
*
* Return: The number of bytes in the initial segment of s which
*         consist only of bytes from accept.
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	unsigned int count = 0;
	int found;

	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
		}
		if (!found)
		{
			break;
		}
		count++;
	}
	return (count);
}
