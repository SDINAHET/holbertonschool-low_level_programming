#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <sys/stat.h>

/* Function prototypes */
void print_error(const char *message, int exit_code);
void copy_file(int file_from, int file_to);

/**
 * print_error - Prints error messages to standard error.
 * @message: Error message to print.
 * @exit_code: Exit code to use.
 */
void print_error(const char *message, int exit_code)
{
	dprintf(STDERR_FILENO, "%s", message);
	exit(exit_code);
}

/**
 * copy_file - Copies content from one file descriptor to another.
 * @file_from: Source file descriptor.
 * @file_to: Destination file descriptor.
 */
void copy_file(int file_from, int file_to)
{
	char buffer[1024];
	ssize_t r, w;

	while ((r = read(file_from, buffer, sizeof(buffer))) > 0)
	{
		w = write(file_to, buffer, r);
		if (w != r)
			print_error("Error: Can't write to file\n", 99);
	}
	if (r == -1)
		print_error("Error: Can't read from file\n", 98);
}

/**
 * main - Copies the content of one file to another.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line arguments.
 *
 * Return: 0 on success, or an exit code on failure.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;
	mode_t file_perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
		print_error("Usage: cp file_from file_to\n", 97);

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		print_error("Error: Can't read from file ", 98);

	file_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, file_perm);
	if (file_to == -1)
	{
		close(file_from);
		print_error("Error: Can't write to file\n", 99);
	}

	copy_file(file_from, file_to);

	if (close(file_from) == -1 || close(file_to) == -1)
		print_error("Error: Can't close fd\n", 100);

	return (0);
}
