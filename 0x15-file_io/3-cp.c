#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* Create_buffer - Allocates 1024 bytes for a buffer
* @file: The name of the file buffer is storing chars for
*
* Return: Pointer to the newly-allocated buffer
*/

char *Create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
* close_file - It closes file descriptors
* @fd: File descriptor to be closed
*/

void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file
* @argc: number of arguments.
* @argv: Array of pointer to the arguments
*
* Return: Always 0
*/

int main(int argc, char *argv[])
{
	int file_from, file_to, err, nwr;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = Create_buffer(argv[2]);
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (file_from == -1 || err == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		nwr = write(file_to, buffer, err);
		if (file_to == -1 || nwr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can'twrite to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		err = read(file_from, buffer, 1024);
		file_to = open(argv[2], O_WRONLY | O_APPEND);
	} while (err > 0);

	free(buffer);
	close_file(file_from);
	close_file(file_to);

	return (0);
}
