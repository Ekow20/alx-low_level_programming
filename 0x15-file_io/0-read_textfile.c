#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Reads the content of a text file and writes it to STDOUT.
 * @filename: The name of the text file to be read.
 * @letters: The maximum number of letters to be read from the file.
 *
 * Return: The actual number of bytes read and printed to STDOUT on success,
 *         otherwise 0 if the function fails or if the filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buffer;
ssize_t file_descriptor;
ssize_t bytes_read;
ssize_t bytes_written;

file_descriptor = open(filename, O_RDONLY);
if (file_descriptor == -1)
return (0);
buffer = malloc(sizeof(char) * letters);
bytes_read = read(file_descriptor, buffer, letters);
bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

free(buffer);
close(file_descriptor);
return (bytes_written);
}
