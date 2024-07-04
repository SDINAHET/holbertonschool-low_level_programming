#include <stdio.h>
#include <stdlib.h>  /*For atoi function*/

/**
* main - Entry point of the program
* @argc: The number of arguments passed to the program
* @argv: An array of strings containing the arguments passed
*
* Return: Always 0 (Success) or 1 (Error)
*/
int main(int argc, char *argv[])
{
int num1, num2, result;

/* Check if the number of arguments is not equal to 3*/
/* (including program name)*/
	if (argc != 3)
	{
		printf("Error\n");
	return (1);  /*Return 1 to indicate error*/
	}

	/* Convert the arguments from strings to integers*/
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	/* Perform the multiplication*/
	result = num1 * num2;

	/* Print the result*/
	printf("%d\n", result);

	return (0);  /* Return 0 to indicate success*/
}
