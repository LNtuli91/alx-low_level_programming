#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: Pointer to the name of the file
 * @text_content: The string to add to the end of the file
 *
 * Return: -1 if the function fails or filename is NULLL
 * if the file does not exist the user lacks w fite permissions - -1,
 * else - 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t write_bytes;
	size_t text_size = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[text_size] != '\0')
			text_size++;

	write_bytes = write(fd, text_content, text_size);
	if (write_bytes == -1 || write_bytes != (ssize_t)text_size)
	{
		close(fd);
		return (-1);
	}
	}

	close(fd);

	return (1);
}
