#include <stdio.h>

/**
* main - point of entry
*
* Description - print number 0 to 100 with space
* si divisible par 3 = Fizz
* si divisible par 5 = Buzz
* si divisible par 3 et 5 = FizzBuzz
* @i numbers 1 --> 100
*
* Return: 0
*/
int main(void)
{

	int i;

	for (i = 1 ; i <= 100; i++)
	{
	if (i % 3 == 0 && i % 5 == 0)
		printf("FizzBuzz");
	else if (i % 3 == 0)
		printf("Fizz");
	else if (i % 5 == 0)
		printf("Buzz");
	else
		printf("%d", i);
	if (i != 100)
		printf(" ");
	}
	printf("\n");
	return (0);
}
