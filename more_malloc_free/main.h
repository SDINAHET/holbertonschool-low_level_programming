#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

/* 0-malloc_free */
void *malloc_checked(unsigned int b);

/* 1-string_nconcat */
char *string_nconcat(char *s1, char *s2, unsigned int n);

/* 2-calloc.c */
void *_calloc(unsigned int nmemb, unsigned int size);

/* 3-array_range.c */
int *array_range(int min, int max);

/*helper*/
int _putchar(char c);

/* 100-realloc.c */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void *new_ptr;

/*101-mul.c*/
int _isdigit(int c);
int _strlen(char *s);
void print_error(char *r);
char *big_multiply(char *s1, char *s2);

#endif /* MAIN_H */
