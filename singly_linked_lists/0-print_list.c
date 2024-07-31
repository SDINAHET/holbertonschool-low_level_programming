#include "list.h"
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
    size_t count = 0;

    while (h != NULL)
    {
        if (h->str == NULL)
            printf("[0] (nil)\n");
        else
            printf("[%u] %s\n", h->len, h->str);

        count++;
        h = h->next;
    }

    return (count); /*Return: the number of nodes*/
}