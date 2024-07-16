#include "function_pointers.h"

/**
* print_name - prints a name using the specified function f
* @name: name of the person
* @f: pointer to the function to use for printing the name
*
* Return: Nothing.
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return; /*exit the function if name of function pointer is NULL*/
	}

	f(name); /*run function*/

}

/*void print_name(char *name, void (*f)(char *))*/
/*{*/
/*	if (name != NULL)*/
/*	{*/
/*		f(name);  run function*/
/*	}*/
/*}*/
