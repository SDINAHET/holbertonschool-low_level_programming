#include <stdio.h>
#include <ctype.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a string of 0 and 1 chars.
 *
 * Return: The converted number, or 0 if there is one or more chars in
 *         the string b that is not 0 or 1 or if b is NULL.
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
        b++; /* Move to the next character */
    }

    return (result);
}