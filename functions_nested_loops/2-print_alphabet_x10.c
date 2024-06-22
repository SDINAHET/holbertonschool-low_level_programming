#include "main.h"

/**
* print_alphabet_x10 - Prints the alphabet in loxercase followed by a new line.
* main - check the code
* Description: print alphabet  x 10 with for
* print_alphabet_x10 - Prints 10x alphabet in lowercase followed by a new line.
* Return: void
*/

void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
		_putchar(c);
		}
	_putchar('\n');
	}
}
