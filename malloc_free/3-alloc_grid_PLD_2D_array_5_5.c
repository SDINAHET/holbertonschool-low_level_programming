#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: the width of the grid.
 * @height: the height of the grid.
 *
 * Return: pointer to the 2D array, or NULL on failure.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j; /*i=h  j=w  grid[i][j]*/

	/*1_Verification des Parametres*/
	/*Si la largeur ou la hauteur est <= 0, la fonction retourne NULL.*/
	if (width <= 0 || height <= 0)
		return (NULL);

	/*2_Allocation de Memoire malloc pour les Pointeurs de Lignes*/
	/*Allocation de memoire pour un tableau de pointeurs de taille height*/
	/*Chaque pointeur representera une ligne de la grille.*/
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	/*3_Allocation de Memoire malloc pour chaque Ligne et Initialisation a 0*/
	/*Pour chaque ligne, on alloue de la memoire pour un tableau d'entiers */
	/*de taille width. Si l'allocation echoue, on libere toute*/
	/* la memoire allouee precedemment et on retourne NULL. */
	/*Si l'allocation reussit, on initialise chaque element de la ligne a 0.*/
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			while (i >= 0)
			{
				free(grid[i]);
				i--;
			}
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	/*4_Retourner le Pointeur vers la Grille 2D*/
	return (grid);
}

int main(void)
{
	int width = 5, height = 5;
	int **grid = alloc_grid(width, height);
	int i = 0;
	int j = 0;

	if (grid != NULL)
	{
		/*Example: Print the grid to verify it has been initialized correctly*/
		for (i = 0; i < height; i++)
		{
			for (i = 0; j < width; j++)
			{
				printf("%d ", grid[i][j]);
			}
			printf("\n");
		}

		/*Free the allocated memory*/
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
	else
	{
	printf("Memory allocation failed.\n");
	}

	return (0);
}
