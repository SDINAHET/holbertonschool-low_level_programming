#include <stdio.h>

/**
* main - Entry point
*
* Description: Prints all possible different combinations of two digits
* Numbers must be separated by ,, followed by a space
* The two digits must be different
* 01 and 10 are considered the same combination of the two digits 0 and 1
* Print only the smallest combination of two digits
* Numbers should be printed in ascending order, with two digits
* You can only use the putchar function (every other function
* (printf, puts, etc…) is forbidden)
* You can only use putchar five times maximum in your code
* You are not allowed to use any variable of type char
* All your code should be in the main function
*
* Return: 0 on success
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
