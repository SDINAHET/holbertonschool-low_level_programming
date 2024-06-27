#include <stdio.h>

/**
* print_array - prints n elements of an array of integers
* @a: pointer to the array of integers
* @n: number of elements to be printed
*
* Description: This function prints the first n elements of the array a,
*              separated by a comma and a space, followed by a new line.
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
		{
		printf("%d", a[i]);
		if (i < n - 1) /*n-1: imprime comma et espace entre chaque nombre*/
		{
			printf(", ");
		}
	}
	printf("\n");
}
