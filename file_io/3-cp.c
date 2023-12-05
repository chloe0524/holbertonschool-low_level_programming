#include "main.h"

/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * @dest_file: The destination file for copying.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(char *dest_file)
{
	char *buffer = malloc(sizeof(char) * 1024);

	if (!buffer)
	{
		dprintf(STDERR_FILENO, "Error: Memory allocation failed for %s\n",
				dest_file);
		exit(99);
	}
	return (buffer);
}

/**
 * close_file - Closes a file descriptor.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Unable to close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies contents from source file to destination file.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 *
 * Return: 0 on success, specific exit codes on failure.
 */
int main(int argc, char *argv[])
{

	char *buffer = create_buffer(argv[2]);
	int source_fd = open(argv[1], O_RDONLY);
	int dest_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	ssize_t read_len, write_len;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp source_file destination_file\n");
		exit(97);
	}

	while ((read_len = read(source_fd, buffer, 1024)) > 0)
	{
		write_len = write(dest_fd, buffer, read_len);
		if (write_len == -1)
		{
			dprintf(STDERR_FILENO, "Error: Unable to write to %s\n", argv[2]);
			free(buffer);
			close_file(source_fd);
			close_file(dest_fd);
			exit(99);
		}
	}

	free(buffer);
	close_file(source_fd);
	close_file(dest_fd);

	return (0);
}

