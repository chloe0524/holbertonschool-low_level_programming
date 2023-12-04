#include "main.h"

/**
 * create_file - creates a file and writes text to it
 * @filename: the name of the file to be created
 * @text_content: the text to be written to the file
 *
 * Return: the number of bytes written to the file, or -1 on error
 *
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t text_size = 0;
	ssize_t write_status;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[text_size] != '\0')
			text_size++;

		write_status = write(fd, text_content, text_size);

		if (write_status == -1 || write_status != text_size)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}

