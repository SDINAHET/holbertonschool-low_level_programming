#include "main.h"

/**
* _strlen - returns the length of a string
* @s: the string to calculate the length of
*
* Return: the length of the string
*/
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
	len++;
	}
	return (len);
	}

/**
* is_palindrome_recursive - helper function to check if a string
* is a palindrome
* @s: the string to check
* @start: the starting index
* @end: the ending index
*
* Return: 1 if the string is a palindrome, 0 otherwise
*/
int is_palindrome_recursive(char *s, int start, int end)
{
/* Base case: if we've checked all the characters */
if (start >= end)
	return (1);

/* If characters at the start and end are different, it's not a palindrome */
if (s[start] != s[end])
	return (0);

/* Move towards the middle */
	return (is_palindrome_recursive(s, start + 1, end - 1));
}

/**
* is_palindrome - checks if a string is a palindrome
* @s: the string to check
*
* Return: 1 if the string is a palindrome, 0 otherwise
*/
int is_palindrome(char *s)
{
	int len;

	len = _strlen(s);

	/* An empty string is a palindrome */
	if (len == 0)
		return (1);

return (is_palindrome_recursive(s, 0, len - 1));
}
