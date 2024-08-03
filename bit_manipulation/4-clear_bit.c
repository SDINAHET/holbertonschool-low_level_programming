#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: Pointer to the number where the bit will be cleared.
 * @index: The index of the bit to set to 0.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	/* Check if the index is out of range */
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	/* Create a mask with all bits set to 1 except the bit at index */
	*n &= ~(1UL << index);

	return (1);
}
/*L'opérateur ~ est l'opérateur de complément bit-à-bit.*/
/*Il inverse tous les bits du masque créé par 1UL << index.*/

/*n est une variable de type unsigned long int*/
/*&= est l'opérateur d'affectation bit-à-bit "ET"*/
