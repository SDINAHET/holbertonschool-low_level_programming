#include <stdarg.h> /*obligatoire avec va_list va_start va_arg va end*/
#include <stdio.h>
#include "variadic_functions.h"

/**
* print_numbers - Prints numbers followed by a new line.
* @separator: The string to be printed between numbers.
* @n: The number of integers passed to the function.
*
* Return: void.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
/*const char *separator est la chaineÃa imprimer entre les nombres.*/
/*const unsigned int n est le nombre d'entiers qui suivent.*/
/*... indique qu'il s'agit d'une fonction variadique,*/
/* acceptant un nombre variable d'arguments.*/
{
	va_list args;
	unsigned int i;
	/*initialisation des variables*/

	va_start(args, n);
	/*initialisation de va_list*/
	/*va_start initialise args pour acceder aux arguments apres n.*/

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator != NULL) /*&& i != n - 1)*/
			printf("%s", separator);
	}
	/*La boucle itere n fois pour recuperer chaque argument*/
	/* avec va_arg et l'imprimer.*/
	/*va_arg(args, int) recupere l'argument suivant*/
	/* de type int de la liste args.*/
	/*Si separator n'est pas NULL et que l'index actuel*/
	/* n'est pas le dernier, imprimez le separator.*/

	va_end(args); /*nettoyage va_end termine l'utilisation de va_list*/
	printf("\n"); /*impression du saut de ligne*/
}
