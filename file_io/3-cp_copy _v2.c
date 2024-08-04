#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

/**
 * error_exit - Prints an error message and exits with a given exit code.
 * @msg: The error message to print.
 * @exit_code: The exit code to return when exiting the program.
 *
 * This function uses the dprintf function to write the error message
 * to the standard error stream (stderr) and then terminates the program
 * with the specified exit code.
 *
 * Return: This function does not return. It exits the program.
 */
void error_exit(const char *msg, int exit_code)
{
	dprintf(STDERR_FILENO, "%s\n", msg);
	exit(exit_code);
}

/**
 * main - Copies the content of one file to another.
 * @argc: Number of command-line arguments.
 * @argv: Array of strings representing command-line arguments.
 *
 * Return: 0 on success, or one of the following exit codes:
 *         97: Incorrect number of arguments.
 *         98: Cannot read from source file.
 *         99: Cannot write to destination file.
 *         100: Cannot close file descriptor.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];
	mode_t file_perms = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	/* rw-rw-r--*/

	if (argc != 3)
		error_exit("Usage: cp file_from file_to", 97);
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_exit("Error: Can't read from file", 98);
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, file_perms);
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
