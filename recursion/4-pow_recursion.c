#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y
 * @x: The base value
 * @y: The exponent value
 *
 * Return: The result of x raised to the power of y. If y is lower than 0,
 * return -1 to indicate an error.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1); /* Return -1 to indicate an error for negative exponents */
	else if (y == 0)
		return (1); /* Base case: factorial of 0 is 1 */
	else
		return (x * (_pow_recursion(x, y - 1)));
	/* Recursive case: n * factorial of (n-1) */
}
