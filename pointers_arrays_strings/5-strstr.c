#include "main.h"

/**
* _strstr - finds the first occurrence of the substring
*	needle in the string haystack
* @haystack: the string to search in
* @needle: the substring to search for
*
* Return: a pointer to the beginning of the located substring,
* or NULL if the substring is not found
*/
char *_strstr(char *haystack, char *needle)
{
	char *haystack_ptr, *needle_ptr;

	while (*haystack)
	{
		haystack_ptr = haystack;
		needle_ptr = needle;

		while (*haystack_ptr == *needle_ptr && *needle_ptr)
/* both conditions *haystack_ptr == *needle_ptr and *needle_ptr are true*/
		{
			haystack_ptr++; /*Moves haystack_ptr to the next character in haystack*/
			needle_ptr++; /*Moves needle_ptr to the next character in needle.*/
		}

		if (*needle_ptr == '\0')
/* *needle_ptr becomes '\0' (end of needle), the loop stops*/
/* because the condition *needle_ptr will evaluate to false*/
/* ('\0' is considered false in C)*/
		{
			return (haystack);
		}

		haystack++;
	}

	return (NULL);
}
