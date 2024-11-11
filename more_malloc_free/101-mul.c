#include "main.h"
#include <stdlib.h>
#include <unistd.h>

/**
 * _isdigit - checks if character is a digit
 * @c: the character to check
 *
 * Return: 1 if digit, 0 otherwise
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _strlen - returns the length of a string
 * @s: the string whose length to check
 *
 * Return: integer length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s++)
		i++;
	return (i);
}

/**
 * print_error - Frees the memory and prints an error message followed by exit.
 *
 * This function prints the word "Error" to the standard output,
 * followed by a new line, and then exits the program with a status of 98.
 */
/*void print_error(char *r)*/
void print_error(void)
{
	/*if (r)   Check if r is non-NULL before freeing */
	/*	free(r);   Free the dynamically allocated memory */
	/*@r: Pointer to the dynamically allocated memory to be freed.*/
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
	exit(98);
}

/**
 * big_multiply - multiply two big number strings
 * @s1: the first big number string
 * @s2: the second big number string
 *
 * Return: the product big number string
 */
char *big_multiply(char *s1, char *s2)
{
	char *r;
	int l1, l2, a, b, c, i, j;

	l1 = _strlen(s1);
	l2 = _strlen(s2);
	r = (char *)calloc(l1 + l2, sizeof(char)); /* Allocate memory for result */
	if (!r)
		print_error();

	/* Perform multiplication */
	for (i = l1 - 1; i >= 0; i--)
	{
		if (!_isdigit(s1[i])) /* Check if the character is a digit */
			print_error();
		a = s1[i] - '0'; /* Convert character to digit */
		c = 0;

		for (j = l2 - 1; j >= 0; j--)
		{
			if (!_isdigit(s2[j])) /* Check if the character is a digit */
				print_error();
			b = s2[j] - '0'; /* Convert character to digit */

			c += r[i + j + 1] + (a * b); /* Multiply and add to current position */
			r[i + j + 1] = c % 10;		 /* Store the single digit result */
			c /= 10;					 /* Carry over */
		}
		if (c)
			r[i + j + 1] += c; /* Add carry to the next position */
	}

	return (r);
}

/**
 * main - multiply two big number strings
 * @argc: the number of arguments
 * @argv: the argument vector
 *
 * Return: Always 0 on success.
 */
int main(int argc, char **argv)
{
	char *r;
	int a, c, x;

	if (argc != 3)
		print_error();

	x = _strlen(argv[1]) + _strlen(argv[2]);
	r = big_multiply(argv[1], argv[2]);
	c = 0;
	a = 0;

	while (c < x)
	{
		if (r[c])
			a = 1;
		if (a)
			_putchar(r[c] + '0');
		c++;
	}
	if (!a)
		_putchar('0');
	_putchar('\n');

	free(r);
	/*cleanup(r);  Ensure we free the allocated memory*/
	return (0);
}
