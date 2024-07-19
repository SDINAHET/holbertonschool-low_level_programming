#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h> /* Obligatoire pour va_list, va_start, va_arg, va_end */
#include <stdio.h>  /* Inclus pour les fonctions de printf */

/*0*/
int sum_them_all(const unsigned int n, ...);
/*1*/
void print_numbers(const char *separator, const unsigned int n, ...);
/*2*/
void print_strings(const char *separator, const unsigned int n, ...);
/*3*/
void print_all(const char * const format, ...);

/*3-definir une fonction en fonction du format*/
typedef struct printall
{
	char cara;
	void (*func)(va_list arg);
} printall_t;

#endif /* VARIADIC_FUNCTIONS_H */
