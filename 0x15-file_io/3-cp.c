#include "holberton.h"

/**
 * _cp - copy the contents of one file to another
 *
 * @file_from: the file to copy from
 * @file_to: the file to copy to
 *
 */

void _cp(char *file_from, char *file_to)
{
	int fd, fd2;
	int i, j, k, l;
	char *buff = malloc(1024);

	fd = open(file_from, O_RDONLY);

	i = read(fd, buff, 1024);

	if (fd == -1 || i == -1)
	{
		dprintf(STDERR_FILENO,"Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	fd2 = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	j = write(fd2, buff, i);

	if (j == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	k = close(fd);
	l = close(fd2);

	if (k == -1 || l == -1)
	{
		dprintf(STDERR_FILENO,"Error: Can't close fd %d\n", k);
		exit(100);
	}
}

/**
 * main - checks my code :)
 *
 * @ac: argument count
 * @av: argument vector
 * Return: Always 0
 */


int main(int ac, char **av)
{

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to %s\n", av[0]);
		exit(97);
	}


	_cp(av[1], av[2]);

	return (0);
}
