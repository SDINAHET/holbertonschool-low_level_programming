#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>  /* Include this for S_IRUSR, S_IWUSR, etc. */
#include "main.h"

/**
 * create_file - Creates a file with the specified content.
 * @filename: The name of the file to create.
 * @text_content: The NULL terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len, written;

	if (filename == NULL)
		return (-1);

	/* Create or truncate the file with permissions rw------- */
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	/* If text_content is NULL, do not write anything, just close the file */
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	/* Calculate the length of the text_content */
	len = strlen(text_content);

	/* Write text_content to the file */
	written = write(fd, text_content, len);
	if (written == -1 || written != len)
	{
		close(fd);
		return (-1);
	}

	/* Close the file descriptor */
	if (close(fd) == -1)
		return (-1);

	return (1);
}
