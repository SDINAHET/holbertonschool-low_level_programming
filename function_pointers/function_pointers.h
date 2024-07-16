#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);

/*0-*/
void print_name(char *name, void (*f)(char *));

/*1-*/
void array_iterator(int *array, size_t size, void (*action)(int));

/*2-*/
int int_index(int *array, int size, int (*cmp)(int));

/*3-*/
