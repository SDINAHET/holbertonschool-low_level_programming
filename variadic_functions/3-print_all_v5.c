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
	unsigned int i=0, j;
	char *vir = "";

	printall_t prt[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string}
	};

	va_start(args, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(prt[j].cara)))
			j++;
		if (j < 4)
		{
			printf("%s", vir);
			prt[j].func(args);
			vir = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
