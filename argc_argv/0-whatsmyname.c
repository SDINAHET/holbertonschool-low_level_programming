#include <stdio.h>

/**
* main - Entry point
* @argc: Number of command line arguments (including program name)
* @argv: Array of pointers to strings containing the arguments
*
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	(void)argc;  /* Unused parameter */

	/* Print the first argument which is the program name */
	printf("%s\n", argv[0]);

	return (0);
}

/*argc (argument count) is the number of arguments passed */
/*to the program including the program's name itself.*/

/*argv (argument vector) is an array of strings where argv[0]*/
/* is the name of the program and argv[1] to argv[argc-1] are*/
/* the command-line arguments passed to the program.*/

/*printf("%s\n", argv[0]);: Prints argv[0], which is the name*/
/* of the program itself. The format specifier %s is used*/
/* to print a string (in this case, the program name).*/


/*code alternatif!!!!!!!!!!*/
/*int main(char *argv[])*/
/*{*/
/*	printf("%s\n", argv[0]);*/
/*	return (0);*/
/*} */
