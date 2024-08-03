#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: Pointer to the number where the bit will be set.
 * @index: The index of the bit to set to 1.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	/* Check if the index is out of range */
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	/* Set the bit at the given index to 1 */
	*n |= (1UL << index);

	return (1);
}
/*1UL est un littéral entier non signé de type unsigned long*/
/*avec la valeur 1. Le suffixe UL indique que c'est de type */
/*unsigned long.*/
