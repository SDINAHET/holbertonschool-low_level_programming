#include "main.h"

/**
* _sqrt_recursion - returns the natural square root
* @n: the number to find the square root of
*
* Return: the natural square root, or -1 if it doesn't exist
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_check(n, 0));
}

/**
* sqrt_check - checks for the square root of n starting from i
* @n: the number to find the square root of
* @i: the current integer to check
*
* Return: the natural square root of n, or -1 if n does
*	 not have a natural square root
*/
int sqrt_check(int n, int i)
{
	long square = i * i;
/* Using long to prevent overflow issues with large integers*/

	if (square > n)
		return (-1);
	if (square == n)
		return (i);
	return (sqrt_check(n, i + 1));
}
