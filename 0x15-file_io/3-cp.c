#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * main - checks my code :)
 *
 * @ac: argument count
 * @av: argument vector
 * Return: Always 0
 */

int main(int ac, char **av)
{
	int fd, fd2;
	int i, j, k, l;
	char buff[1024];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	fd = open(av[1], O_RDONLY);
	if (fd == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			av[1]), exit(98);

	fd2 = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			av[1]), exit(98);
	while ((i = read(fd, buff, 1024)) > 0)
	{
		j = write(fd2, buff, i);
		if (i != j)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n"
				, av[1]), exit(99);
		}
	}
	if (i == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			av[1]), exit(98);

	if (j == -1)

		dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
			av[2]), exit(99);


	k = close(fd);
	l = close(fd2);

	if (k == -1 || l == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",
			k), exit(100);

	return (0);
}
