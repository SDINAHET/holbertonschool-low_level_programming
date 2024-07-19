#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main()
{
	const char *message = "Hello, World\n";

	write(1, message, 13);
	return (0);
}
