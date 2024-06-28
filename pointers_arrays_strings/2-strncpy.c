#include "main.h"

/**
* _strncpy - Copies a string, using at most n bytes from src.
* @dest: The destination string.
* @src: The source string.
* @n: The maximum number of bytes to be copied from src.
*
* Return: A pointer to the resulting string dest.
*/
char *_strncpy(char *dest, const char *src, int n)
{
	int i;
/*i est utilise pour iterer sur les caracteres de src et les copier dans dest*/
	for (i = 0; i < n && src[i] != '\0'; i++)
/*boucle copie les caracteres de src vers dest tant que i est inferieur a n*/
/*et que le caractere courant de src n'est pas un caractere nul (\0).*/
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
/*Si src est plus court que n, cette boucle remplit */
/*les positions restantes de dest avec des octets nuls (\0) */
/*jusqu'a ce que n caracteres aient eteÃecrits.*/
	{
		dest[i] = '\0';
	}
	return (dest);
/*La fonction retourne un pointeur vers la chai®ne de caracteres dest.*/
}
