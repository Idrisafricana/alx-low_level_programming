#include "main.h"
#include <stdio.h>

/**
 * error_and_exit - prints an error message and exits the program
 * @msg: error message
 */
void error_and_exit(const char *msg)
{
	dprintf(STDERR_FILENO, "Error: %s\n", msg);
	exit(EXIT_FAILURE);
}

/**
 * copy_file - copies the content of one file to another
 * @src_path: path to the source file
 * @dest_path: path to the destination file
 */
void copy_file(const char *src_path, const char *dest_path)
{
	int src_fd, dest_fd;
	ssize_t nchars;
	char buf[1024];

	src_fd = open(src_path, O_RDONLY);
	dest_fd = open(dest_path, O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);

	if (src_fd == -1 || dest_fd == -1)
		error_and_exit("Can't open file");

	while ((nchars = read(src_fd, buf, sizeof(buf))) > 0)
	{
		if (nchars == -1)
			error_and_exit("Can't read from file");
		if (write(dest_fd, buf, nchars) == -1)
			error_and_exit("Can't write to file");
	}

	if (close(src_fd) == -1 || close(dest_fd) == -1)
		error_and_exit("Can't close file");
}

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, otherwise 1
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	copy_file(argv[1], argv[2]);

	return (EXIT_SUCCESS);
}
