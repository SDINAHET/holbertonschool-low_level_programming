#include "main.h"

/**
* free_grid - frees a 2 dimensional grid previously created by alloc_grid.
* @grid: the grid to be freed.
* @height: the height of the grid.
*
* Return: void.
*/
void free_grid(int **grid, int height)
{
	int i; /*1_declaration de la variable*/

	if (grid == NULL || height <= 0) /*2_validation des parametres*/
	return;
/*Si grid est NULL ou si height est <= 0, la fonction retourne immediatement.*/
/* Cela empeche les erreurs de segmentation et assure que les parametres */
/*sont valides avant de proceder a la liberation de la memoire*/

	for (i = 0; i < height; i++) /*3_liberation de chaque ligne de la grille*/
	{
		free(grid[i]);
	}
/*La boucle for parcourt chaque ligne de la grille.*/
/* grid[i] est un pointeur vers une ligne (un tableau d'entiers)*/
/* et free(grid[i]) libère la mémoire allouée pour cette ligne.*/
	free(grid); /*4_liberation du tableau du pointeurs*/
/*Apres avoir libere�toutes les lignes individuelles, la memoire alloue*/
/* pour le tableau de pointeurs lui-même (grid) est libere.*/
/* Cela complete la liberation de la grille bidimensionnelle entiere.*/
}
