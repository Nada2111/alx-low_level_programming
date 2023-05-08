#include <stdio.h>
#include "main.h"
/**
 * main -program that copies the content of a file to another file.
 * @argc: number of arg.
 * @argv: arg vector.
 * Return: int num (0).
 */
int main(int argc, char *argv[])
{
	int from, to, clo1, clo2, lletrt1, llettr2;
	char *buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to"), exit(97);
	from = open(argv[1], O_RDONLY, 0);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	while ((lletrt1 = read(from, buffer, 1024)) > 0)
	{
		llettr2 = write(to, buffer, lletrt1);
		if (llettr2 != lletrt1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	if (lletrt1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	clo1 = close(from);
	if (clo1 != 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from), exit(100);
	clo2 = close(to);
	if (clo2 != 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to), exit(100);
	return (0);
}

