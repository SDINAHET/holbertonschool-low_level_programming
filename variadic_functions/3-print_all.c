#include <stdarg.h> /*obligatoire avec va_list va_start va_arg va_end*/
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - Print a character from a va_list.
 * @args: A va_list containing the character to be printed.
 *
 * Description: This function extracts a character from the va_list
 * and prints it to the standard output.
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - Print an integer from a va_list.
 * @args: A va_list containing the integer to be printed.
 *
 * Description: This function extracts an integer from the va_list
 * and prints it to the standard output.
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - Print a floating-point number from a va_list.
 * @args: A va_list containing the floating-point number to be printed.
 *
 * Description: This function extracts a floating-point number from
 * the va_list and prints it to the standard output.
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - Print a string from a va_list.
 * @args: A va_list containing the string to be printed.
 *
 * Description: This function extracts a string from the va_list and
 * prints it to the standard output. If the string is NULL, it prints
 * "(null)" instead.
 */
void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
	{
		str = "(nil)";
	}
	printf("%s", str);
}

/**
* print_all - Prints anything based on the format provided.
* @format: A list of types of arguments passed to the function.
*
* Description: This function prints various types based on the format
* specifiers provided. It supports 'c', 'i', 'f', and 's'.
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
	char *vir = "";

	printall_t prt[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string}
	};

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (j < 4 && format[i] != prt[j].cara)
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
