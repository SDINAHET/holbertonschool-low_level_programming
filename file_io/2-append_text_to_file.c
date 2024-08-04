#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: The NULL terminated string to add at the end of the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len, written;

	if (filename == NULL)
		return (-1);

	/* Open the file in append mode */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	/* If text_content is NULL, return success if file exists*/
	/*and no content is added */
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
