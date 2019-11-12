#include "holberton.h"

/**
 *
 *
 *
 *
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
	return (j);

}
