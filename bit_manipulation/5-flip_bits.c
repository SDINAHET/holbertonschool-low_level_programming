#include "main.h"

/**
 * flip_bits - Returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result;
	unsigned int count;

	/* Compute the XOR of the two numbers */
	xor_result = n ^ m;

	/* Count the number of set bits in the result */
	count = 0;
	while (xor_result != 0)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}

	return (count);
}
/*xor_result & 1 extrait le bit le moins significatif de xor_result.*/
/*xor_result >>= 1 effectue un décalage à droite de xor_result.*/
/*Cela déplace tous les bits d'une position vers la droite.*/
