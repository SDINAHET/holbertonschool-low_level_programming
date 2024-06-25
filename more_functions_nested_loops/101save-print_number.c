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
        _putchar('-');
        num = -n;
    }
    else
    {
        num = n;
    }

    if (num / 10)
    {
        print_number(num / 10);
    }

    _putchar((num % 10) + '0');
}



for ((i < -9999) && (i > 9999))
	if ((i >= 1000) || (i <= -1000))
	{
		_putchar (i / 1000, i);
		_putchar (i / 100, i);
		_putchar (i /10, i);
		_putchar (i % 10, i);
	}
	else ((i >= 100) || (i <= -100)
	{
		_putchar (i /100, i);
		_putchar (i / 10, i);
		_putchar (i % 10, i);
	}
	else ((i >= 10) || i <= -10))
	{
		_putchar (i / 10, i);
		_putchar (iÃ% 10, i);
	}
	else
		_putchar (%d, i)
_putchar ('\n')
}
