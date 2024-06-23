#include <stdio.h>

/**
* main - Entry point
*
* Description: Prints all possible different combinations of three digits.
* Numbers must be separated by comma , followed by a space
* The three digits must be different
* 012, 120, 102, 021, 201, 210 are considered the same combination
* Print only the smallest combination of three digits
* Numbers should be printed in ascending order, with three digits
* You can only use the putchar function (every other function
* (printf, puts, etc…) is forbidden)
* You can only use putchar six times maximum in your code
* You are not allowed to use any variable of type char
* All your code should be in the main function
*
* Return: 0 on success
*/
int main(void)
{
	int i, j, k;

	for (i = 0; i <= 7; i++)
	{
		for (j = i + 1; j <= 8; j++)
		{
			for (k = j + 1; k <= 9; k++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				if (i != 7 || j != 8 || k != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
