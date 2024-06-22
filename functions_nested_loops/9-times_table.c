#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int i, j, table_multiplication;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
		table_multiplication = i * j;
		_putchar(table_multiplication + '0');
		}
	_putchar('n');
	}
}
