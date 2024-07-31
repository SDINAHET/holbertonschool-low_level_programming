#include "lists.h"
#include <stdio.h>

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
 *  Note: This function traverses the entire list, so it is a O(n) operation,
 * where n is the number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
     size_t count = 0;  /* Initialize a counter to keep track of the number of nodes */

    /* Traverse the list until the end is reached */
    while (h != NULL)
    {
        /* Check if the string of the current node is NULL */
        if (h->str == NULL)
        {
            /* Print a placeholder in english for NULL strings */
            /*espace réservé" ou "texte de substitution" nil*/
            /*printf("[0] (nil)\n");*/
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
            /* Print the length of the string and the string itself */
            /*printf("[%u] %s\n", h->len, h->str);*/
            /*h est un pointeur vers un noeud de la liste chaînée (list_t)*/
            /*h->len est la longeur de la chaîne stock dans le noeud (format %u)*/
            /*h->str est un pointeur vers la chaine de caractère stocké dans le noeud (format %s) */
            /* Print the length of the string */
            print_number(h->len);   /* Convert length to characters and print */
            _putchar(' ');

            /* Print the string itself */
            for (int i = 0; h->str[i] != '\0'; i++)
                _putchar(h->str[i]);

            _putchar('\n');
        }

        /* Move to the next node in the list */
        count++;  /* Increment the node counter */
        h = h->next;  /* Update the pointer to point to the next node */
    }