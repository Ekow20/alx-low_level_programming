#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *allocate_buffer(char *file);
void close_fd(int fd);

/**
 * allocate_buffer - Allocates 1024 bytes for a buffer.
 * @file: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *allocate_buffer(char *file)
{
char *buffer = malloc(sizeof(char) * 1024);

if (buffer == NULL)
{
dprintf(STDERR_FILENO, "Error: Can't allocate memory for %s\n", file);
exit(99);
}

return buffer;
}

/**
* close_fd - Closes file descriptors.
* @fd: The file descriptor to be closed.
*/
void close_fd(int fd)
{
if (close(fd) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close file descriptor %d\n", fd);
exit(100);
}
}

/**
* main - Copies the contents of a file to another file.
* @argc: The number of arguments supplied to the program.
* @argv: An array of pointers to the arguments.
*
* Return: 0 on success.
*
* Description: If the argument count is incorrect - exit code 97.
* If file_from does not exist or cannot be read - exit code 98.
* If file_to cannot be created or written to - exit code 99.
* If file_to or file_from cannot be closed - exit code 100.
*/
int main(int argc, char *argv[])
{
int from_fd, to_fd, read_bytes, written_bytes;
char *buffer;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

buffer = allocate_buffer(argv[2]);
from_fd = open(argv[1], O_RDONLY);
read_bytes = read(from_fd, buffer, 1024);
to_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

do{
if (from_fd == -1 || read_bytes == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't read from file %s\n", argv[1]);
free(buffer);
exit(98);
}

written_bytes = write(to_fd, buffer, read_bytes);
if (to_fd == -1 || written_bytes == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't write to file %s\n", argv[2]);
free(buffer);
exit(99);
}

read_bytes = read(from_fd, buffer, 1024);
to_fd = open(argv[2], O_WRONLY | O_APPEND);

} while (read_bytes > 0);

free(buffer);
close_fd(from_fd);
close_fd(to_fd);
return (0);
}
