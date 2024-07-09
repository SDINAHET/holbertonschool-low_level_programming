#include <stdlib.h>

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

	for (length = 0; str[length] != '\0'; length++)

	dup = malloc((length + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL); /* It returns NULL if insufficient memory was available*/

	for (i = 0; i < length; i++)
		dup[i] = str[i];
	dup[length] = '\0';

	return (dup);
}
