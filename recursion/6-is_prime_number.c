#include "main.h"

/**
* is_prime_number - checks if a number is a prime number
* @n: the number to check
*
* Return: 1 if n is prime, 0 otherwise
*/
int is_prime_number(int n)
{
	int check_prime(int n, int i)
	{
		if (n <= 1)
			return (0);
		if (i * i > n)
			return (1);
		if (n % i == 0)
			return (0);
		return (check_prime(n, i + 1));
	}
	return (check_prime(n, 2));
}

/*check_prime est une fonction récursive interne à is_prime_number*/
/* qui vérifie si un nombre n est divisible par un nombre i.*/

/*Si n est inférieur ou égal à 1, elle renvoie 0 (car les*/
/* nombres inférieurs ou égaux à 1 ne sont pas premiers).*/
/*Si i * i est supérieur à n, elle renvoie 1 (car n n'est pas divisible par*/
/*un nombre inférieur à sa racine carrée).*/
/*Si n est divisible par i, elle renvoie 0 (car n n'est pas premier).*/
/*Sinon, elle s'appelle elle-même avec l'entier suivant (i + 1).*/
/*is_prime_number est la fonction principale qui appelle*/
/* check_prime en commençant par 2.*/
