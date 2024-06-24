#include "main.h"

/**
* print_numbers - Prints number in 1 line, starting with 0
* _putchar can use twice
*/
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar (i + '0');
	}
	_putchar ('\n');
}
