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
	(void)argv;  /* Unused parameter */

	/* Print the number of arguments (excluding the program name itself) */
	printf("%d\n", argc - 1);

	return (0);
}


/*#include <stdio.h>: Includes the standard input-output*/
/* library for using printf.*/

/*int main(int argc, char *argv[]): This is the main function where:*/

/*argc (argument count) is the number of arguments passed*/
/*to the program, including the program's name itself.*/

/*argv (argument vector) is an array of strings where argv[0] is*/
/* the name of the program and argv[1] to argv[argc-1] are the*/
/* command-line arguments passed to the program.*/

/*printf("%d\n", argc - 1);: Prints the number of arguments passed*/
/* to the program excluding the program's own name (argc - 1).*/
/* This subtraction gives us the count of actual arguments*/
/* provided on the command line.*/

/*return (0);: Indicates successful completion of the program.*/
