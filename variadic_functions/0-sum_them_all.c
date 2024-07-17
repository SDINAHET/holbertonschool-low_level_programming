#include <stdarg.h>
#include "variadic_functions.h"

/**
* sum_them_all - Returns the sum of all its parameters.
* @n: The number of parameters passed to the function.
*
* Return: The sum of all parameters. If n == 0, return 0.
*/
int sum_them_all(const unsigned int n, ...)
/*const unsigned int n est le nombre d'arguments qui suivront*/
/*... indique qu'il s'agit d'une fonction variadique,*/
/* acceptant un nombre variable d'arguments.*/
{
	va_list args;
	unsigned int i;
	int sum = 0;
/*va_list args est utilise pour acceder aux arguments variadiques.*/
/*sum est initialise a 0 pour stocker la somme des arguments.*/

	if (n == 0)
		return (0);
/*Si n est 0, il n'y a pas d'arguments a additionner, donc on retourne 0.*/
	va_start(args, n);
/*va_start initialise args pour acceder aux arguments apres n.*/
	for (i = 0; i < n; i++)
		sum += va_arg(args, int); /* += augmenter */
/*La boucle itere n fois pour recuperer chaque */
/*argument avec va_arg et l'ajouter a sum.*/
/*va_arg(args, int) recuper l'argument suivant*/
/* de type int de la liste args.*/
	va_end(args);
/*va_end termine l'utilisation de va_list.*/
	return (sum);
/*retourn la somme*/
}


/*éetapes :*/
/*1-Inclure les bibliotheques necessaires :*/

/*stdarg.h pour utiliser les fonctions variadiques.*/
/*stddef.h pour utiliser le type size_t.*/

/*2-Definir la fonction sum_them_all :*/

/*Utiliser va_list pour gerer les arguments variadiques.*/
/*Utiliser va_start pour initialiser la liste des arguments.*/
/*Iterer sur les arguments et calculer la somme.*/
/*Utiliser va_end pour nettoyer la liste des arguments.*/
