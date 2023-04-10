#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function succeeds, the number of bytes written to the file.
 *         If filename is NULL, -1 is returned and errno is set to EINVAL.
 *         If the file cannot be opened or written to, -1 is returned and errno
 *         is set to the appropriate error code.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd, num_written, text_len = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
while (text_content[text_len] != '\0')
text_len++;
}

fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);

num_written = write(fd, text_content, text_len);
if (num_written == -1)
{
close(fd);
return (-1);
}

close(fd);
return (num_written);
}
