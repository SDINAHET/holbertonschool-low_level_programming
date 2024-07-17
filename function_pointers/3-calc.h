#ifndef CALC_H
#define CALC_H

#include <stdio.h>
#include <stdlib.h>

/**
* struct op - Struct op
*
* @op: The operator
* @f: The function associated
*/
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

/*addition*/
int op_add(int a, int b);

/*soustraction*/
int op_sub(int a, int b);

/*multiplication*/
int op_mul(int a, int b);

/*division*/
int op_div(int a, int b);

/*modulo*/
int op_mod(int a, int b);

/*3-get_op_func.c*/
int (*get_op_func(char *s))(int, int);

#endif /* CALC_H */
