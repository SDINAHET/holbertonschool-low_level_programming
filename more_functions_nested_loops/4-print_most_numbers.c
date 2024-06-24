#include "main.h"

/**
* print_most_numbers - Prints number in 1 line,
* starting with 0 to 9 unless 2 et 4
* _putchar can use twice
*/
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar (i + '0');
		}
	}
	_putchar ('\n');
}
