#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFSIZE 1024
/**
 * error_exit - Prints an error message and exits with a specified code
 * @code: The exit code
 * @message: The error message to print
 */
void error_exit(int code, const char *message)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(code);
}

/**
 * copy_file - Copies the contents of one file to another
 * @from_path: The path of the source file
 * @to_path: The path of the destination file
 */
void copy_file(const char *from_path, const char *to_path)
{
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char buf[BUFSIZE];

	fd_from = open(from_path, O_RDONLY);
	if (fd_from == -1)
		error_exit(98, "Error: Can't read from file");

	fd_to = open(to_path, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
		error_exit(99, "Error: Can't write to file");

	while ((bytes_read = read(fd_from, buf, BUFSIZE)) > 0)
	{
		bytes_written = write(fd_to, buf, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
			error_exit(99, "Error: Can't write to file");
	}
	if (bytes_read == -1)
		error_exit(98, "Error: Can't read from file");
	if (close(fd_from) == -1 || close(fd_to) == -1)
		error_exit(100, "Error: Can't close fd");
}

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to");
	copy_file(argv[1], argv[2]);
	return (0);
}
