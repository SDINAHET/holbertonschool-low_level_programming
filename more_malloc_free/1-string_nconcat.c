#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* string_nconcat - concatene deux chaines de caracteres
* @s1: la premiere chaine
* @s2: la deuxieme chaine
* @n: le nombre maximum d'octets de s2 concatener a s1
*
* Return: un pointeur vers l'espace nouvellement alloue en memoire
*         contenant s1, suivi des n premiers octets de s2, et termineÃ©
*         par un caractere nul, ou NULL si la fonction Ãechoue.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int i, j, len1, len2;

	/* Traiter NULL comme une chaine vide */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculer la longueur de s1 et s2 */
	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	/* Si n est > ou =  la longueur de s2, utiliser toute s2 */
	if (n >= len2)
		n = len2;

	/* Allouer de la memoire pour la chaine concatenee */
	concat = malloc((len1 + n + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);

	/* Copier s1 dans concat */
	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	/* Copier les n premiers octets de s2 dans concat */
	for (j = 0; j < n; j++)
		concat[i + j] = s2[j];

	/* Terminer la chaine concatenee par un caractere nul */
	concat[i + j] = '\0';

	return (concat);
}
