#include <stdio.h>

/**
* main - Entry point of the program
*
* Description: Computes the sum of all multiples of 3 or 5
* below 1024 (excluded) and prints the result.
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int sum = 0;    /* Variable to store the sum of multiples */
	int number;     /* Iterator variable for the loop */

	/* Iterate through each number from 1 to 1023 */
	for (number = 1; number < 1024; number++)
	{
	/* Check if the number is a multiple of 3 or 5 */
		if (number % 3 == 0 || number % 5 == 0)
		{
			sum += number;  /* Add the number to sum if it's a multiple */
		}
	}
	/* Print the computed sum followed by a newline */
	printf("%d\n", sum);
	return (0);   /* Return success */
}
