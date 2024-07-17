#include <stdarg.h> /*obligatoire avec va_list va_start va_arg va_end*/
#include <stdio.h>
#include "variadic_functions.h"

/**
* print_all - Prints anything based on the format provided.
* @format: A list of types of arguments passed to the function.
*
* Return: void.
*/
void print_all(const char * const format, ...)
/*const char *separator est la chaine a imprimer entre les nombres.*/
/*const format est le format c/i/f/s pour la fonction*/
/*... indique qu'il s'agit d'une fonction variadique,*/
/* acceptant un nombre variable d'arguments.*/
{
	va_list args;
	unsigned int i = 0, j;
	char *str, *separator = "";

	va_start(args, format);

	while
	{
		while
		{
			 va_arg(args, char *);
		}
	}

	va_end(args);

	printf("\n");
}
