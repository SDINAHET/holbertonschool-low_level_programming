#include "main.h"

/**
* _abs - Computes the absolute value of an integer.
* @n: The integer to compute the absolute value of.
*
* Description: This function returns the absolute value of the given int `n`.
*
* Return: The absolute value of the integer.
*/
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
