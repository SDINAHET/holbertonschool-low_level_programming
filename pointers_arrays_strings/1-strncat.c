#include "main.h"

/**
* _strncat - Concatenates two strings.
* @dest: The destination string.
* @src: The source string.
* @n: The maximum number of bytes to be used from src
*
* Return: A pointer to the resulting string dest.
*/
char *_strncat(char *dest, char *src, int n)
{
	char *dest_start = dest;

/*Move the pointer to the end of dest string*/
	while (*dest)
	{
	dest++;
	}

/*Copy src string to dest string*/
	while (n > 0 && *src)
	{
	*dest = *src;
	dest++;
	src++;
	n--; /* n--  equivalent n = n - 1 */
	}

/*Add terminating null byte*/
	*dest = '\0';
	return (dest_start);
}
