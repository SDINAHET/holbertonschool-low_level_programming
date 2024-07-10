#include "main.h"

/**
* _strdup - Returns a pointer to a newly allocated space in memory,
*           which contains a copy of the string given as a parameter.
* @str: The string to duplicate.
*
* Return: A pointer to the duplicated string, or NULL if str is NULL
*         or if insufficient memory was available.
*/
char *_strdup(char *str)
{
	char *dup;
	unsigned int i, length;

	if (str == NULL)
		return (NULL); /*Returns NULL if str = NULL*/

	/* Calculate the length of the string */
	for (length = 0; str[length] != '\0'; length++)
		;
		/* ;  Empty loop body to count the characters in str */

	/* Allocate memory for the duplicate string (+1 for the null terminator) */
	dup = malloc((length + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL); /* Returns NULL if insufficient memory was available */

	/* Copy the string */
	for (i = 0; i < length; i++)
		dup[i] = str[i];
	dup[length] = '\0'; /* Null-terminate the duplicated string */

	return (dup);
}
