#include "main.h"

/**
* more_numbers - Prints numbers in 1 line, starting with 0
* 01234567891011121314 de 0 a 14
* _putchar can use three times in your code
*/
void more_numbers(void)
{
	int i;
	int first_digit;
	int second_digit;

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
			_putchar (i + '0'); /*print first digit de 0 a 9*/
		}
	}
	_putchar ('\n'); /*print newline after code*/
}
