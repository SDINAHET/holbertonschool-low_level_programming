#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
*get_op_func - selects the correct function to perform the operation
*@s: is the operator passed as argument
*
*Return: pointer to the function that corresponds to the operator given
*as a parameter
*/
int (*get_op_func(char *s))(int, int)
{
	/*initialize an Array of Structs*/
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0; /*initialisation correcte de i*/

	while (ops[i].op != NULL) /* initialisation ne fonctionne pas ici*/
	/*this continue as long as the op field in the current struct is not NULL*/
	/*cette condition verifie que l'element courant*/
	/* dans le tableau ops n'est pas NULL*/
	{
		if (*(ops[i].op) == *s && s[1] == '\0')
			return (ops[i].f);
	/*verifie si l'operateur passe en argument correspond*/
	/* a l'operateur dans le tableau ops*/
	/*ops[i].op est un pointeur vers une chaine de caractere*/
	/* representant un operateur +...*/
	/* *s est le premier caractere de la chaine de caractere en argument*/
	/*la condition *(ops[i].op == s* verifie si le premier caractere stocke */
	/* dans la structure ops[i}.op correspond a la chaine de caractere s*/
	/* s[1] == '\0'  s[1] est le deuxieme caractere de la*/
	/* chaine de caractere 's' */
		i++;
	/*incrementation de i*/
	}
	return (NULL);
	/*retourne NULL si aucun operateur ne correspond*/
}
