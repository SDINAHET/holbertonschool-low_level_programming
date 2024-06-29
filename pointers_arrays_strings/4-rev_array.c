#include "main.h"

/**
* reverse_array - Reverses the content of an array of integers.
* @a: The array of integers.
* @n: The number of elements in the array.
*/
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
/*We use a for loop to iterate from the start of the array*/
/* to the middle of the array (n / 2)*/
/*In each iteration, we swap the element at the current index (a[i])*/
/* with the corresponding element from the end (a[n - 1 - i]) ou (a[--n -i]).*/
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
