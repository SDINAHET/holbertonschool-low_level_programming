#include "main.h"
#include <stdio.h>

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to convert to binary.
 */
void print_binary(unsigned long int n)
{
	/* Base case: if n is 0 and we haven't printed anything yet */
	if (n == 0)
	{
		_putchar('0');
		/*printf("%c\n", '0');*/
		return;
	}

	/* Recursive case */
	if (n >> 1)  /* Check if there are more bits to process */
	{
		print_binary(n >> 1);  /* Recursive call with n shifted right */
	}
	_putchar((n & 1) ? '1' : '0');   /*Print the least significant bit */
	/*printf("%c\n", (n & 1) ? '1' : '0');*/
}
/*? '1' : '0');  = if else*/
