#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point of the program
* Description n > 0 n==0 n<0
* Return:0 succes
* betty style doc for function main goes there
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
