#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

void error_exit(const char* msg, int code);

int main(int argc, char* argv[])
{
if (argc != 3) {
fprintf(stderr, "Usage: %s file_from file_to\n", argv[0]);
exit(97);
}

int fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1) {
error_exit("Error: Can't read from file %s\n", 98, argv[1]);
}

int fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd_to == -1) {
error_exit("Error: Can't write to %s\n", 99, argv[2]);
}

char buffer[BUFFER_SIZE];
ssize_t bytes_read, bytes_written;
while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0) {
bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written == -1 || bytes_written != bytes_read) {
error_exit("Error: Can't write to %s\n", 99, argv[2]);
}
}

if (bytes_read == -1)
{
error_exit("Error: Can't read from file %s\n", 98, argv[1]);
}

close(fd_from);
close(fd_to);

return (0);
}

void error_exit(const char* msg, int code, ...)
{
va_list args;
va_start(args, code);
vfprintf(stderr, msg, args);
va_end(args);
exit(code);
}
