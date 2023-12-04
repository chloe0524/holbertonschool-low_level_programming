#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

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
	int file;
	ssize_t actual_number, bytes_read;
	char *buf;

	if (filename == NULL || letters == 0)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(buf);
		return (0);
	}
	actual_number = read(file, buf, letters);
	if (actual_number == -1)
	{
		free(buf);
		close(file);
		return (0);
	}

	bytes_read = write(STDOUT_FILENO, buf, actual_number);

	free(buf);
	close(file);
	if (bytes_read != actual_number)
		return (0);
	return (actual_number);
}

