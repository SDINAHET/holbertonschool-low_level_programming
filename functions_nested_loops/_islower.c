#include <unistd.h>

/**
 * _islower * _islower - writes the character c to stdout
 * @c: The character to print
 *
 *
 * Description: This function checks if the given character `c`
 * is a lowercase letter (from 'a' to 'z').
 *
 * Return: 1 if the character is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	return (write(1, &c, 1));
}
