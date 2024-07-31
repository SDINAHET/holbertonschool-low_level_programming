#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>  /* Pour la fonction write*/

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the head of the list_t list
 *
 * Description: This function prints each element of a singly linked list
 * of type `list_t`. Each node is printed with its string length and the
 * string itself. If a node's string is NULL, it prints "(nil)" with length 0.
 *
 * Return: the number of nodes
 *
 * Note: This function traverses the entire list, so it is an O(n) operation,
 * where n is the number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0; /* Initialize a counter of the number of nodes */
	int i;  /* Index for string traversal */

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			_putchar('[');
			_putchar('0');
			_putchar(']');
			_putchar(' ');
			_putchar('(');
			_putchar('n');
			_putchar('i');
			_putchar('l');
			_putchar(')');
			_putchar('\n');
		}
		else
		{
			_putchar('[');
			_print_number(h->len);  /* Print length of the string */
			_putchar(']');
			_putchar(' ');

			/* Print the string itself using while loop */
			i = 0;
			while (h->str[i] != '\0')
			{
				_putchar(h->str[i]);
				i++;
			}
			_putchar('\n');
		}

		count++;
		h = h->next;
	}
	return (count);
}

/**
 * _print_number - prints an integer as digits
 * @n: the integer to print
 *
 * Description: This function prints an integer digit by digit.
 */
void _print_number(unsigned int n)
{
	if (n / 10 != 0)
		_print_number(n / 10);
	_putchar((n % 10) + '0');
}

