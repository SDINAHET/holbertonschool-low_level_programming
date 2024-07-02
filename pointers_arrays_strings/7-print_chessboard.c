#include "main.h"

/**
* print_chessboard - prints the chessboard
* @a: 2D array representing the chessboard
*/
void print_chessboard(char (*a)[8])
/*(*a)[8] : a est un * qui pointe vers un tableau de 8 elements de type char*/
{
int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);/*Accede l'element j du tableau i pointe par a*/
		}
	_putchar('\n');
	}
}
