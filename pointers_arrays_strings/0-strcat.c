#include "main.h"

/**
* _strcat - Concatenates two strings.
* @dest: The destination string.
* @src: The source string.
*
* Return: A pointer to the resulting string dest.
*/
char *_strcat(char *dest, char *src)
{
	char *dest_start = dest;

/*Move the pointer to the end of dest string*/
	while (*dest)
	{
	dest++;
	}

/*Copy src string to dest string*/
	while (*src)
	{
	*dest = *src;
	dest++;
	src++;
	}

/*Add terminating null byte*/
	*dest = '\0';

	return (dest_start);
}
