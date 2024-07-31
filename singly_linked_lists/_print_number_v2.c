#include "lists.h"
#include <stdio.h>

/**
 * _print_number - prints an integer as digits
 * @n: the integer to print
 *
 * Description: This function prints an integer digit by digit.
 */
void _print_number(unsigned int n)
{
	if (n / 10 != 0)
	{
		_print_number(n / 10);
	}
	_putchar((n % 10) + '0');
}
