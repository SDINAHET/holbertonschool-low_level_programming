#include "main.h"

/**
* _strncat - Concatenates two strings.
* @dest: The destination string.
* @src: The source string.
*
* Return: A pointer to the resulting string dest.
*/
char *_strncat(char *dest, char *src, int n)
{
	char *dest_start = dest;
	int n;

/*Move the pointer to the end of dest string*/
	while (*dest)
	{
	dest++;
	}

/*Copy src string to dest string*/
	while (*src)
	{
	*dest = *src + 1;
	dest++;
	src++;
	}

/*Add terminating null byte*/
	*dest = '\0';

	return (dest_start);
}
