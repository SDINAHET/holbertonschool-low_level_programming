#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success, or appropriate error code on failure
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*operation)(int, int);

	if (argc != 4) /*1--*/
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	operation = get_op_func(argv[2]);

	if (operation == NULL) /*2--*/
	{
		printf("Error\n");
		exit(99);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0) /*3--*/
	{
		printf("Error\n");
		exit(100);
	}

	result = operation(num1, num2);
	printf("%d\n", result);

	return (0);
}

/*1--*/
/*if the number of arguments is wrong, print Error, followed*/
/* by a new line, and exit with the status 98 exit*/

/*2--*/
/*if the operator is none of the above, print Error, followed*/
/* by a new line, and exit with the status 99 exit*/

/*3--*/
/*if the user tries to divide (/ or %) by 0, print Error, followed*/
/* by a new line, and exit with the status 100 exit*/
