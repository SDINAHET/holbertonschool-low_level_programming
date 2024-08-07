#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

/**
 * error_exit - Prints an error message and exits with the given code.
 * @msg: The error message to print.
 * @exit_code: The exit code to return.
 */
void error_exit(const char *msg, int exit_code)
{
	dprintf(STDERR_FILENO, "%s\n", msg);
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
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];
	mode_t perms = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;  /*rw-rw-r--*/

	if (argc != 3)
		error_exit("Usage: cp file_from file_to", 97);
	fd_from = open(argv[1], O_RDONLY);

	if (fd_from == -1)
		error_exit("Error: Can't read from file", 98);
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, perms);

	if (fd_to == -1)
	{
		close(fd_from);
		error_exit("Error: Can't write to file", 99);
	}

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			close(fd_from);
			close(fd_to);
			error_exit("Error: Can't write to file", 99);
		}
	}
	if (bytes_read == -1)
	{
		close(fd_from);
		close(fd_to);
		error_exit("Error: Can't read from file", 98);
	}

	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd\n");
		exit(100);
	}

	return (0);
}
