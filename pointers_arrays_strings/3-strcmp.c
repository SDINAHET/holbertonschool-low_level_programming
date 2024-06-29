#include "main.h"

/**
* _strcmp - Compares two strings.
* @s1: The first string H.
* @s2: The second string W.
*
* Return: An integer less than, equal to, or greater than zero if s1 is found,
* respectively, to be less than, to match, or be greater than s2.
*/
int _strcmp(char *s1, char *s2)
{
/*Compare each character of both strings*/
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
/* Return the difference between the first unmatched characters*/
	return (*s1 - *s2);
}
/*Initialement, s1 pointe vers 'H' et s2 pointe vers 'W*/
/*Iteration 1: *s1 est 'H' et *s2 est 'W'.*/
/**s1 && *s2 est vrai car ni s1 ni s2 n'ont atteint la fin de chaine. */
/**s1 == *s2 est faux car 'H' (72) n'est pas�egale 'W' (87).*/
/* La condition dans while echoue, et la boucle se termine.*/
/*La boucle while avec la condition (*s1 && *s2 && *s1 == *s2)*/
/* assure que les deux chaînes sont comparées caractère par caractère*/
/* jusqu'à ce que l'une des conditions suivantes soit remplie :*/


/* { fonction si utilisation strcmp dans la librairie string.h*/
/*	return (strcmp(s1, s2));*/
/*}*/
/*s1 = "Hello"*/
/*s2 = "World!"*/
/*Iteration 1*/
/**s1 = 'H' (ASCII 72)*/
/**s2 = 'W' (ASCII 87)*/
/**s1 != *s2, donc la boucle while s'arrete.*/
/*Retour de la difference*/
/*La fonction retourne *s1 - *s2*/
/*72 - 87 = -15*/

