#include "main.h"

/**
* print_triangle - prints a triangle, followed by a new line.
* @size: the size of the triangle
*
* Return: void
*/
void print_triangle(int size)
{
int i, j;

	if (size <= 0)
	{
		_putchar ('\n'); /*si print_triangle<0 exit*/
		return;
	}
	for (i = 1; i <= size; i++)
	{
		for (j = i; j < size; j++) /* affiche ' ' valeur print_triangle-1 */
		{
			_putchar (' ');
		}
		for (j = 1; j <= i; j++) /*  affiche # */
		{
			_putchar ('#');
		}
		_putchar ('\n');
	}
}
