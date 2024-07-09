#include "main.h"
/*#include <stdlib.h>*/
/*#include <stddef.h>*/

/**
* str_concat - concatenates two strings
* @s1: the first string
* @s2: the second string
*
* Return: pointer to the newly allocated space in memory containing
* the concatenated string, or NULL on failure
*/
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int i, j, len1 = 0, len2 = 0;
/*int i, j : Des variables pour les boucles.*/
/*int len1 = 0, len2 = 0_Des variables pour stocker les longueurs de s1 et s2*/

	/* Treat NULL as an empty string_ Traiter les chaines NULL */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculate the lengths of s1 and s2 */
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	/* Allocate memory for the concatenated string _ malloc */
	concat_str = malloc((len1 + len2 + 1) * sizeof(char));
	if (concat_str == NULL)
		return (NULL);

	/* Copy s1 to concat_str */
	for (i = 0; i < len1; i++)
		concat_str[i] = s1[i];

	/* Copy s2 to concat_str */
	for (j = 0; j < len2; j++, i++)
		concat_str[i] = s2[j];

	/* Null terminate the concatenated string */
	concat_str[i] = '\0';

	return (concat_str);
}
