#include "main.h"

/**
* factorial - Returns the factorial of a given number
* @n: The number to calculate the factorial of
*
* Return: The factorial of n, or -1 if n is lower than 0
*/
int factorial(int n)
{
	if (n < 0)
		return (-1); /* Return -1 to indicate an error for negative numbers */
	else if (n == 0)
		return (1); /* Base case: factorial of 0 is 1 */
	else
		return (n * factorial(n - 1)); /* Recursive case: n * factorial of (n-1) */
}
