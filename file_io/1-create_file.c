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
	int file;
	int bytes_read = 0;

	if (filename == NULL || text_content == 0)
		return (-1);

	file = open(filename, O_WRONLY | O_CREAT, 0664);
	if (file == -1)
	{
		return (-1);
	}

	bytes_read = read(file, text_content, strlen(text_content));
	if (bytes_read == -1)
	{
		close(file);
		return (-1);
	}

	close(file);
	return (1);
}
