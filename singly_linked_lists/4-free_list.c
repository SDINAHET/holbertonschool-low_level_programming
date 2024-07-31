#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * free_list - Frees a list_t list.
 * @head: Pointer to the head of the list_t list.
 *
 * Description: This function traverses through the linked list and frees
 * the memory allocated for each node, including the duplicated string.
 */
void free_list(list_t *head)
{
    list_t *temp;  /* Temporary pointer to hold the current node */

    /* Traverse the list and free each node */
    while (head != NULL)
    {
        temp = head->next;  /* Save the next node */
        free(head->str);    /* Free the string in the current node */
        free(head);         /* Free the current node itself */
        head = temp;        /* Move to the next node */
    }
}
