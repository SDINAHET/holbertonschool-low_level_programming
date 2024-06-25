#include <stdio.h>
#include <math.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	long num = 612852475143;
	long max_prime = -1;
	long i;

	// Check for the smallest factor, which is 2
	while (num % 2 == 0)
	{
		max_prime = 2;
		num /= 2;
	}

	// Check for odd factors from 3 onwards
	for (i = 3; i <= sqrt(num); i += 2)
	{
	while (num % i == 0)
	{
		max_prime = i;
		num /= i;
	}
	}
	// If num is a prime number greater than 2
	if (num > 2)
	max_prime = num;

	printf("%ld\n", max_prime);

	return 0;
}
