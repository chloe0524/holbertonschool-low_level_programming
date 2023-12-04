#include "main.h"

/**
 * read_textfile - reads from a file and writes to stdout
 * @filename: name of the file to read
 * @letters: number of bytes to read and write
 * Return: number of bytes read or 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t total_written = 0;
	ssize_t bytes_written;
	int fd = open(filename, O_RDONLY);
	char buffer[BUFSIZ];

	if (filename == NULL)
		return (0);

	if (fd == -1)
		return (0);

	while (letters > 0 && (bytes_written = write(STDOUT_FILENO, buffer,
					read(fd, buffer, BUFSIZ))) > 0)
	{
		total_written += bytes_written;
		letters -= bytes_written;
	}

	close(fd);
	return (total_written);
}
