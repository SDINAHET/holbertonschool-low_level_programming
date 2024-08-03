#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: Pointer to a string of 0 and 1 chars
 *
 * Return: The converted number, or 0 if there is one or more chars in
 * the string b that is not 0 or 1 or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	/* Check if the input string is NULL */
	if (b == NULL)
	{
		return (0);
	}

	/* Traverse each character in the string */
	while (*b != '\0')
	{
		/* Check if the character is either '0' or '1' */
		if (*b != '0' && *b != '1')
		{
			return (0);
		}

		/* Shift the result to the left by 1 and add the current binary digit */
		result = (result << 1) | (*b - '0');
		/*result = result * 2 + (*b - '0');   Multiply res by 2 and add current bit*/
		/*result = (result << 1) | (*b == '0' ? 0 : 1);*/
		b++; /* Move to the next character */
	}

	return (result);
}
/*1. Décalage à Gauche result << 1 */
/*Le décalage à gauche de 1 position multiplie la valeur de result par 2*/
/*2. Ajout du Bit Courant (*b - '0')*/
/*convertit le caractère binaire en une valeur entière (0 ou 1) */
