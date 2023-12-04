#include "main.h"

/**
 * read_textfile - reads from a file and writes to stdout
 * @filename: name of the file to read
 * @letters: number of bytes to read and write
 * Return: number of bytes read or 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = open(filename, O_RDONLY);
	ssize_t bytes_read = 0;
	size_t actual_num = 0;
	char buffer[BUFSIZ];

	if (filename == NULL)
		return (0);

	if (fd == -1)
		return (0);

	while (actual_num < (size_t)letters)
	{
		bytes_read = read(fd, buffer, sizeof(buffer));
		if (bytes_read <= 0)
			break;

		write(STDOUT_FILENO, buffer, bytes_read);
		actual_num += bytes_read;
	}

	return (actual_num);
}

