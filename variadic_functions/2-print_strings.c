#include <stdarg.h> /*obligatoire avec va_list va_start va_arg va_end*/
#include <stdio.h>
#include "variadic_functions.h"

/**
* print_strings - Prints strings followed by a new line.
* @separator: The string to be printed between numbers.
* @n: The number of integers passed to the function.
*
* Return: void.
*/
void print_strings(const char *separator, const unsigned int n, ...)
/*const char *separator est la chaineÃa imprimer entre les nombres.*/
/*const unsigned int n est le nombre d'entiers qui suivent.*/
/*... indique qu'il s'agit d'une fonction variadique,*/
/* acceptant un nombre variable d'arguments.*/
{
	va_list args; /*initialisation des variables*/
	unsigned int i;
	char *str;

	va_start(args, n); /*initialisation de va_list,acces arg apres n*/

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", va_arg(args, char *));  /*ou printf("%s", str);*/

		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}

	va_end(args); /*nettoyage va_end termine l'utilisation de va_list*/

	printf("\n"); /*impression du saut de ligne*/
}
