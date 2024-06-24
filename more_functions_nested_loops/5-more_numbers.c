#include "main.h"

/**
* more_numbers - Prints numbers from 0 to 14, ten times in a single line.
* Each set of numbers is followed by a newline.
* _putchar can use three times in your code
* SD
*/
void more_numbers(void)
{
	int i;
	int j;
	int first_digit;
	int second_digit;

	for (j = 0 ; j <= 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9) /*nombre au dessus de 10 entre 10 et 14*/
			{
				first_digit = i / 10; /*appel 1er chiffre*/
				second_digit = i % 10; /*appel 2eme chiffre*/
				_putchar (first_digit + '0'); /*print first digit*/
				_putchar (second_digit + '0'); /*print secon digit*/
			}
			else
			{
				_putchar (i + '0');
			}
		}
		_putchar ('\n');
	}
	_putchar ('\n'); /*print newline after code*/
}
