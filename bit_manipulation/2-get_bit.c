#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The number from which to extract the bit.
 * @index: The index of the bit to retrieve.
 *
 * Return: The value of the bit at index index, or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/* Check if the index is out of range */
	if (index >= sizeof(unsigned long int) * 8) /*8 octet en 64bits*/
	{
		return (-1);
	}

	/* Return the bit value at the given index */
	return ((n >> index) & 1);
}
