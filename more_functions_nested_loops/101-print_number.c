#include "main.h"

/**
* print_number - prints an integer
* @n: integer to be printed
*
* Return: Always 0.
*/
void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		{
		if (n < 0)
		{
			_putchar('-');
			num = -n;
		}
		else
		{
			num = n;
		}
		}
	}
	else
	{
		num = n;
	}
	if (num / 10)
		print_number(num / 10);
	_putchar ((num % 10) + '0');
}
