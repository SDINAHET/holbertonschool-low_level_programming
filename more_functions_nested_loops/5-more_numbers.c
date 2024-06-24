#include "main.h"

/**
* more_numbers - Prints numbers from 0 to 14, ten times in a single line.
* Each set of numbers is followed by a newline.
* _putchar can use three times in your code
* SD
*/
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++) /* 10 lignes*/
	{
		for (j = 0; j <= 14; j++) /*chiffre 0 a 14*/
		{
			if (j > 9) /*si chiffre superieur a 9 = 10 a 14*/
				_putchar ((j / 10) + '0'); /* j/10 */
			_putchar ((j % 10) + '0'); /* else j%10 pour j<=9*/
		}
		_putchar ('\n');
	}
}
