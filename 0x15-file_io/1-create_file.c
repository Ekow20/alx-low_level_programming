#include "main.h"

/**
 * create_new_file - Creates a new file.
 * @filename: A pointer to the name of the file to be created.
 * @text: A pointer to a string to be written to the file.
 *
 * Return: If the function fails - -1.
 * Otherwise - 1.
 */
int create_new_file(const char *filename, char *text)
{
int file_descriptor, bytes_written, text_length = 0;

if (filename == NULL)
return (-1);

if (text != NULL)
{
while (text[text_length])
text_length++;
}

file_descriptor = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
bytes_written = write(file_descriptor, text, text_length);

if (file_descriptor == -1 || bytes_written == -1)
return (-1);

close(file_descriptor);

return (1);
}
