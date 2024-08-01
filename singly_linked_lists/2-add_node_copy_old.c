#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: Double pointer to the head of the list_t list.
 * @str: The string to be duplicated and added to the new node.
 *
 * Description: This function creates a new node, duplicates the string
 *              `str`, and adds the new node at the beginning of the list.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
    list_t *new_node;   /* Pointer to the new node */
	char *str_dup;      /* Pointer to the duplicated string */
	size_t len = 0;    /* Length of the string */

    /* Calculate the length of the string manually */
    while (str[len] != '\0')
		len++;

    /* Allocate memory for the new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

    /* Allocate memory for the duplicated string */
	str_dup = malloc(len + 1); /* +1 for the null terminator */
	if (str_dup == NULL)
    {
		free(new_node);
		return (NULL);
    }

    /* Copy the string to the newly allocated space */
    for (size_t i = 0; i < len; i++)
		str_dup[i] = str[i];
	str_dup[len] = '\0'; /* Add the null terminator */

    /* Set the new node's values */
	new_node->str = str_dup;
    new_node->len = len;  /* Use the manually computed length */
    new_node->next = *head; /* Point the new node to the head of the list */
	*head = new_node;      /* Update the head to point to the new node */

	return (new_node);     /* Return the address of the new node */
}