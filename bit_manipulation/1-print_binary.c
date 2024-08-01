#include <stdio.h>

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to convert to binary.
 */
void print_binary(unsigned long int n)
{
    unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
    int found_one = 0;

    /*Special case for 0*/
    if (n == 0)
    {
        _putchar('0');
        return;
    }

    /*Traverse from the most significant bit*/ 
    /*to the least significant bit*/
    while (mask > 0)
    {
        if ((n & mask) != 0)
        {
            _putchar('1');
            found_one = 1;
        }
        else if (found_one)
        {
            _putchar('0');
        }
        mask >>= 1;
    }
}