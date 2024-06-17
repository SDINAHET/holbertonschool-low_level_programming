#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints the size of various types on the computer
 * it is compiled and run on.
 * Return: 0 if successful
 */
int main(void)
{
	const char *msg_part1 = "and that piece of art is useful\" - ";
	const char *msg_part2 = "Dora Korpar, 2015-10-19\n";
	/* Print part 1 */
	write(2, msg_part1, 35);  /* 2 is the file descriptor for standard error */
	/* Print part 2 */
	write(2, msg_part2, 26);  /* 2 is the file descriptor for standard error */
	return (1);
}
