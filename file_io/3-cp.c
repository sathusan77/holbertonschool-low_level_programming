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
 * @fd_from: pointer to store source fd
 * @fd_to: pointer to store destination fd
 */
void open_files(char *file_from, char *file_to, int *fd_from, int *fd_to)
{
    *fd_from = open(file_from, O_RDONLY);
    if (*fd_from == -1)
        print_error(98, "Error: Can't read from file %s\n", file_from);

    *fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (*fd_to == -1)
        print_error(99, "Error: Can't write to %s\n", file_to);
}

/**
 * close_files - closes file descriptors
 * @fd: file descriptor to close
 */
void close_files(int fd)
{
    if (close(fd) == -1)
        print_error(100, NULL, (char *)(long)fd);
}

/**
 * main - copies the content of a file to another
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
    int fd_from, fd_to;

    if (argc != 3)
        print_error(97, "Usage: cp file_from file_to\n", NULL);

    open_files(argv[1], argv[2], &fd_from, &fd_to);
    copy_file(fd_from, fd_to, argv[1], argv[2]);
    close_files(fd_from);
    close_files(fd_to);

    return (0);
}

