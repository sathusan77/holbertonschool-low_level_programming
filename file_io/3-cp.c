#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#define BUFFER_SIZE 1024

/**
 * error_exit - prints an error message and exits
 * @code: exit code
 * @msg: format string
 * @file: filename or fd
 */
void error_exit(int code, char *msg, char *file)
{
	if (code == 100)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", (int)(long)file);
	else
		dprintf(STDERR_FILENO, msg, file);
	exit(code);
}

/**
 * copy_content - copies the content of src to dest
 * @fd_from: source file descriptor
 * @fd_to: destination file descriptor
 * @file_from: source filename
 * @file_to: destination filename
 */
void copy_content(int fd_from, int fd_to, char *file_from, char *file_to)
{
	ssize_t n_read, n_written;
	char buffer[BUFFER_SIZE];

	while ((n_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		n_written = write(fd_to, buffer, n_read);
		if (n_written != n_read)
			error_exit(99, "Error: Can't write to %s\n", file_to);
	}

	if (n_read == -1)
		error_exit(98, "Error: Can't read from file %s\n", file_from);
}

/**
 * open_files - opens the files and returns file descriptors
 * @file_from: source filename
 * @file_to: destination filename
 * @fd_from: pointer to store source fd
 * @fd_to: pointer to store destination fd
 */
void open_files(char *file_from, char *file_to, int *fd_from, int *fd_to)
{
	*fd_from = open(file_from, O_RDONLY);
	if (*fd_from == -1)
		error_exit(98, "Error: Can't read from file %s\n", file_from);

	*fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (*fd_to == -1)
	{
		close(*fd_from);
		error_exit(99, "Error: Can't write to %s\n", file_to);
	}
}

/**
 * close_fd - closes a file descriptor
 * @fd: file descriptor
 */
void close_fd(int fd)
{
	if (close(fd) == -1)
		error_exit(100, NULL, (char *)(long)fd);
}

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;

	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to\n", NULL);

	open_files(argv[1], argv[2], &fd_from, &fd_to);
	copy_content(fd_from, fd_to, argv[1], argv[2]);
	close_fd(fd_from);
	close_fd(fd_to);

	return (0);
}

