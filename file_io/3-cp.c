#include "main.h"

/**
 * main - program that copies content of one file to another
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 0 on success, or error codes
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		return (97);
	}

	if (file_init(argv[1], argv[2], &fd_from, &fd_to) != 0)
	{
		return (98);
	}

	if (error_copy(fd_from, fd_to) != 0)
	{
		return (99);
	}

	if (error_close(fd_from, fd_to) != 0)
	{
		return (100);
	}

	return (0);
}

/**
 * file_init - initialize files for copying
 * @file_back: source file name
 * @file_go: destination file name.
 * @fd_back: pointer to source file descriptor
 * @fd_go: pointer to destination file descriptor
 *
 * Return: 0 on success, or 1
 */
int file_init(char *file_back, char *file_go, int *fd_back, int *fd_go)
{
	*fd_back = open(file_back, O_RDONLY);
	*fd_go = open(file_go, O_WRONLY | O_TRUNC);

	if (*fd_back == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", file_back);
		return (1);
	}

	if (*fd_go == -1)
	{
		*fd_go = open(file_go, O_WRONLY | O_TRUNC | O_CREAT, 0644);
		if (*fd_go == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_go);
			return (1);
		}
	}

	return (0);
}
/**
 * error_copy - copy content from one file desc to another
 * @fd_from: source file descriptor
 * @fd_to: destination file descriptor
 *
 * Return: 0 on success, 98 or 99
 */
int error_copy(int fd_from, int fd_to)
{
	char buffer[1024];
	ssize_t ctr_read, ctr_write;

	while ((ctr_read = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		if (ctr_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file\n");
			return (98);
		}

		ctr_write = write(fd_to, buffer, ctr_read);
		if (ctr_write == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file\n");
			return (99);
		}
	}

	return (0);
}

/**
 * error_close - close file descriptors
 * @fd_from: source file descriptor
 * @fd_to: destination file descriptor
 *
 * Return: 0 on success, or 100
 */
int error_close(int fd_from, int fd_to)
{
	if ((close(fd_from) == -1) || (close(fd_to) == -1))
	{
		dprintf(STDERR_FILENO, "Error: Can't close file descriptors\n");
		return (100);
	}

	return (0);
}

