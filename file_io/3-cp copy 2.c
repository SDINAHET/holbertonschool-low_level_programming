#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

/**
 * print_error - Prints an error message to standard error and exits.
 * @message: Error message to print.
 * @file: Filename associated with the error.
 * @exit_code: Exit code to use.
 */
void print_error(const char *message, const char *file, int exit_code)
{
	if (file)
		dprintf(STDERR_FILENO, "%s %s\n", message, file);
	else
		dprintf(STDERR_FILENO, "%s\n", message);
	exit(exit_code);
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
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];
	mode_t file_perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
		print_error("Usage: cp file_from file_to", NULL, -1, 97);
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		print_error("Error: Can't read from file", argv[1], -1, 98);
	file_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, file_perm);
	if (file_to == -1)
	{
		close(file_from);
		print_error("Error: Can't write to", argv[2], -1, 99);
	}

	while ((bytes_read = read(file_from, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(file_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			close(file_from);
			close(file_to);
			print_error("Error: Can't write to", argv[2], -1, 99);
		}
	}
	if (bytes_read == -1)
	{
		close(file_from);
		close(file_to);
		print_error("Error: Can't read from file", argv[1], -1,  98);
	}

	if (close(file_from) == -1)
		print_error("Error: Can't close fd", NULL, file_from, 100);
	if (close(file_to) == -1)
		print_error("Error: Can't close fd", NULL, file_to, 100);

	return (0);
}
