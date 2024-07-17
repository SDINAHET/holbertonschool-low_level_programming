#include <stdio.h>
#include "variadic_functions.h"

/**
* main - check the code
*
* Return: Always 0.
*/
int main(void)
{
	int sum;

	sum = sum_them_all(2, 98, 1024); /*test avec 2 arguments*/
	printf("%d\n", sum); /*affiche 1122 98+1024*/
	sum = sum_them_all(4, 98, 1024, 402, -1024); /*test avec 4 arguments*/
	printf("%d\n", sum); /*affiche 500 98+1024+402-1024*/
	return (0);
}
