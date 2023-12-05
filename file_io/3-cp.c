#include "main.h"

/**
 * close_andprint - closes a file descriptor and prints
 * an error message if it fails
 *
 * @fd: file descriptor to close
 *
 * Return: 0 on success, 100 on failure
 */
int close_andprint(int fd)
{
	int oops;

	oops = close(fd);
	if (oops == -1)
	{
		dprintf(STDERR_FILENO, "Oops: Can't close fd %d\n", fd);
		return (100);
	}
	return (0);
}

/**
 * writing_oops - error handler for a write error
 *
 * @fd1: first descriptor to close
 * @fd_go: second descriptor to close
 * @filename: filename prompting the error
 *
 * Return: 99
 */
int writing_oops(int fd1, int fd_go, char *filename)
{
	dprintf(STDERR_FILENO, "Oops: Can't write to %s\n", filename);
	close_andprint(fd1);
	close_andprint(fd_go);
	return (99);
}

/**
 * reading_oops - error handler for a read error
 *
 * @fd1: first descriptor to close
 * @fd_go: second descriptor to close
 * @filename: filename prompting the error
 *
 * Return: 98
 */
int reading_oops(int fd1, int fd_go, char *filename)
{
	dprintf(STDERR_FILENO, "Oops: Can't read from file %s\n", filename);
	close_andprint(fd1);
	close_andprint(fd_go);
	return (98);
}

/**
 * error_close - close file descriptors
 *
 * @fd_back: source file descriptor
 * @fd_go: destination file descriptor
 *
 * Return: 0 on success, or 100
 */
int error_close(int fd_back, int fd_go)
{
	if ((close_andprint(fd_back) == 100) || (close_andprint(fd_go) == 100))
	{
		dprintf(STDERR_FILENO, "Oops: Can't close file descriptors\n");
		return (100);
	}

	return (0);
}


/**
 * main - copy one file to another, new file with perms 664
 * usage - cp file_from file_to
 *
 * @ac: number of arg
 * @av: list of args
 *
 * Return: 97 if incorrect num of args
 * 98 if file_from does not exist or unreadable
 * 99 if write fails
 * 100 if file close fails
 * 0 otherwise
 */
int main(int ac, char *av[])
{
	char buf[1024];
	int read_len, write_len, file_back, file_go, error;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}
	file_back = open(av[1], O_RDONLY);
	if (file_back == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		return (98);
	}
	file_go = open(av[2], O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (file_go == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		close_andprint(file_back);
		return (99);
	}
	do {
		read_len = read(file_back, buf, 1024);
		if (read_len == -1)
			return (reading_oops(file_back, file_go, av[1]));
		write_len = write(file_go, buf, read_len);
		if (write_len == -1 || write_len != read_len)
			return (writing_oops(file_back, file_go, av[2]));
	} while (read_len == 1024);
	error = error_close(file_back, file_go);
	if (error != 0)
		return (100);
	return (0);
}
