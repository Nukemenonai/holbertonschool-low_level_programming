#include "holberton.h"

/**
 * append_text_to_file - appends a text to the end of the file
 *
 * @filename: the name of the file
 * @text_content: the text to append
 * Return: 1 if process is successful -1 if there was an error
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int len;

	if (text_content == NULL)
		text_content = "";

	for (len = 0; text_content[len] != '\0'; len++)
	{}


	fd = open(filename, O_WRONLY | O_APPEND, 0600);

	if (fd == -1)
		return (-1);


	write(fd, text_content, len);

	close(fd);

	return (1);


	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		if (filename != NULL)
			return (1);
		else
			return (-1);
	}
}
