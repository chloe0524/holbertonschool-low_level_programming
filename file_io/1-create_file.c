#include "main.h"

/**
 * create_file - creates a file and writes text to it
 * @filename: the name of the file to be created
 * @text_content: the text to be written to the file
 *
 * Return: the number of bytes written to the file, or -1 on error
 */

int create_file(const char *filename, char *text_content)
{
	int file, write_status;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_CREAT, 0600);

	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		write_status = write(file, text_content, strlen(text_content));

		if (write_status == -1)
		{
			close(file);
			return (-1);
		}
	}

	close(file);
	return (1);
}
