#include <stdio.h>

/**
* main - Entry point
*
* Description: Prints all possible combinations of two two-digit numbers.
* The numbers should range from 0 to 99.
* The two numbers should be separated by a space.
* All numbers should be printed with two digits.
* The combination of numbers must be separated by comma, followed by a space.
* The combinations of numbers should be printed in ascending order.
* You can only use the putchar function (every other function is forbidden).
* You can only use putchar eight times maximum in your code.
* You are not allowed to use any variable of type char.
* All your code should be in the main function.
*
* Return: 0 on success
*/
int main(void)
{
	int i, j;

	for (i = 0; i <= 99; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');

			if (i != 98 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
