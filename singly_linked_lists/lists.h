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
 * Lorsqu'une chaîne est allouée avec malloc, vous obtenez
 * un pointeur vers le début de cette mémoire allouée,
 * que vous pouvez utiliser comme une chaîne de caractères.
 *
 * Description: singly linked list node structure
 * This structure represents a node in a singly linked list.
 * The `str` field is a pointer to a string that has been allocated using
 * malloc. This means the memory for this string needs to be freed when
 * the node is no longer needed to avoid memory leaks.
 */
typedef struct list_s /*important cette structure des singly linky lists*/
{
    char *str;              /* Pointeur vers une chaîne de caractères */
    unsigned int len;      /* Longueur de la chaîne de caractères */
    struct list_s *next;   /* Pointeur vers le prochain nœud de la liste */
} list_t;

/* Function prototypes */
int _putchar(char c);

/*0*/
size_t print_list(const list_t *h);
void print_number(unsigned int n);

/*1*/
size_t list_len(const list_t *h);

/*2*/
list_t *add_node(list_t **head, const char *str);

/*3*/
list_t *add_node_end(list_t **head, const char *str);

/*4*/
void free_list(list_t *head);

#endif /* LISTS_H */