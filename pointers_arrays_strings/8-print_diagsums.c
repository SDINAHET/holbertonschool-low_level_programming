#include <stdio.h>

/**
* print_diagsums - prints the sum of the two diagonals of a square matrix
* @a: pointer to the first element of the matrix
* @size: the size of the matrix (number of rows/columns)
*/
void print_diagsums(int *a, int size)
{
int i;
int sum1 =0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
	sum1 += a[i * size + i];         /* Sum of the primary diagonal */
	sum2 += a[i * size + (size - 1 - i)]; /* Sum of the secondary diagonal */
	}

	printf("%d, %d\n", sum1, sum2);

	/*fprintf(sum1);
	_putchar (',');
	_putchar (' ');
	fprintf(sum2);
	_putchar ('\n');*/
}
