#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

/**
 * print_error - prints an error message and exits with code
 * @code: exit code
 * @msg: error message format
 * @file: file name or fd
 */
void print_error(int code, char *msg, char *file)
{
	if (code == 100)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", (int)(long)file);
	else
		dprintf(STDERR_FILENO, msg, file);
	exit(code);
}

/**
 * copy_file - copies content from source to destination
 * @src: source file descriptor
 * @dest: destination file descriptor
 * @file_from: source file name
 * @file_to: destination file name
 */
void copy_file(int src, int dest, char *file_from, char *file_to)
{
	ssize_t n_read, n_written;
	char buffer[BUFFER_SIZE];

	while ((n_read = read(src, buffer, BUFFER_SIZE)) > 0)
	{
		n_written = write(dest, buffer, n_read);
		if (n_written != n_read)
			print_error(99, "Error: Can't write to %s\n", file_to);
	}
	if (n_read == -1)
		print_error(98, "Error: Can't read from file %s\n", file_from);
}

/**
 * open_files - opens source and destination files
 * @file_from: source file name
 * @file_to: destination file name
 * @fd_from: pointer to store source_*

