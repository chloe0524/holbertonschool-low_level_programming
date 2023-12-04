#include "main.h"


/**
 * read_textfile - prints text from a file
 *
 * @filename: name of the file
 * @letters: number of characters to read
 *
 * Return: actual number of letters read, 0 if end of file
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t total_written = 0;
	ssize_t bytes_written;
	int fd = open(filename, O_RDONLY);

	char *buf = malloc(sizeof(char) * BUFSIZ);

	if (filename == NULL || buf == NULL)
	{
		free(buf);
		return (0);
	}

	if (fd == -1)
	{
		free(buf);
		return (0);
	}

	while (letters > 0 && (bytes_written = write(STDOUT_FILENO, buf,
					read(fd, buf, BUFSIZ))) > 0)
	{
		total_written += bytes_written;
		letters -= bytes_written;
	}

	free(buf);
	close(fd);
	return (total_written);
}

