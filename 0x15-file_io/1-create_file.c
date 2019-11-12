#include "holberton.h"

/**
 *
 *
 *
 *
 *
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int len;

	if (text_content == NULL)
		text_content = "";

	for (len = 0; text_content[len] != '\0'; len++)
	{}


	fd = open(filename, O_CREAT| O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);


	write(fd, text_content, len);

	close(fd);

	return (1);
}
