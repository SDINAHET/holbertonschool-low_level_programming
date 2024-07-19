#include <stdio.h>
#include <stdlib.h>

/**
* print_opcodes - Prints the opcodes of the main function.
* @bytes: Number of bytes to print.
*
* This function prints the opcodes of the current function's address.
* Each opcode is printed as a two-character hexadecimal number.
*/
void print_opcodes(int bytes);

/**
* main - Entry point of the program.
* @argc: Number of command-line arguments.
* @argv: Array of command-line arguments.
*
* This function validates the command-line arguments, converts the
* number of bytes to print from string to integer, and calls
* print_opcodes to print the opcodes.
*
* Return: 0 on success, 1 if arguments are incorrect, or 2 if
*         the number of bytes is negative.
*/
int main(int argc, char **argv)
{
	int num_bytes;

	if (argc != 2)
	{
		fprintf(stderr, "Error\n");
		exit(1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		fprintf(stderr, "Error\n");
		exit(2);
	}

	print_opcodes(num_bytes);

	return (0);
}

/**
* print_opcodes - Prints the opcodes of the current function.
* @bytes: Number of bytes to print.
*
* This function uses a pointer to access the opcodes of the current
* function's address and prints them in hexadecimal format.
*/
void print_opcodes(int bytes)
{
	unsigned char *ptr = (unsigned char *)print_opcodes;
	/* Function pointer to address */
	int i;

	for (i = 0; i < bytes; i++)
	{
		if (i > 0)
			printf(" ");
		printf("%02x", ptr[i]);  /*avant %02x puis 0x%x\n puis 0x%x */
	}
	printf("\n");
}
