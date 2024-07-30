#include <stdio.h>

/**
* Main - entry point of the program
* Description - putchar all possible different combinations of two digits
* unless the same combinaison 01 = 10 with separated by comma ,
* Return : 0 succes
*/
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i != 8 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
