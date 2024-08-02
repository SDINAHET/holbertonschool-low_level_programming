#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h> /* for size_t*/

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * This structure represents a node in a singly linked list.
 * The `str` field is a pointer to a string that has been allocated using
 * malloc. This means the memory for this string needs to be freed when
 * the node is no longer needed to avoid memory leaks.
 */
typedef struct list_s
{
	char *str;              /* Pointer to a string */
	unsigned int len;      /* Length of the string */
	struct list_s *next;   /* Pointer to the next node in the list */
} list_t;

/* Function prototypes */
int _putchar(char c);

/*1*/
size_t list_len(const list_t *h);

/*2*/
list_t *add_node(list_t **head, const char *str);

/*3*/
list_t *add_node_end(list_t **head, const char *str);

/*4*/
void free_list(list_t *head);

#endif /* LISTS_H */
