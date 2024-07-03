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
	return (_sqrt_recursion(n));
}
