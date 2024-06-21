#include "main.h"

/**
* print_alphabet - Prints the alphabet in loxercase followed by a new line.
* main - check the code
* Description: print alphabet with for
* print_alphabet - Prints the alphabet in lowercase followed by a new line.
* Return: Always 0.
*/

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
