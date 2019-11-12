#include "holberton.h"

/**
 * read_textfile - prints a text to the posix stdout
 *
 * @filename: the name of the file to print
 * @letters: the number of letters to print
 * Return: the number of characters or 0 if the process fails.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char buff[letters];
	int fd;

	size_t i;
	size_t j;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	i = read(fd, buff, letters);


	j = write(1, buff, i);

	if (j == -1)
		return (0);

	return (j);

}
