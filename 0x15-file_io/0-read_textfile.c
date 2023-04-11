#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - reads a text file a prints it to the POSIX standard output.
 * @filename: A pointer
 * @letters: number of letters it could read and print
 * Return: if the file can not be opened or read
 * if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t n, m, l;

	char *tt;

	if (filename == NULL)
		return (0);

	tt = malloc(sizeof(char) * letters);
	if (tt == NULL)
		return (0);
	n = open(filename, O_RDONLY);
	m = read(o, tt, letters);
	l = write(STDOUT_FILENO, tt, m);

	if (n == -1 || m == -1 || l == -1 || l != m)
	{
		free(tt);
		return (0);
	}
	free(tt);
	close(n);
	return (l);
}
