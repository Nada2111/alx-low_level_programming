#include "main.h"

/**
 * create_file -create a function that creates a file
 * @filename:  is the name of the file to create
 * @text_content: terminated string to write to the file
 * Return: filename is NULL return -1

 **/
int create_file(const char *filename, char *text_content)
{
	int f, w, i = 0;

	if (filename == NULL)
		return (-1);

	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (f == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[i] != '\0')
			words++;

		w = write(f, text_content, i);
		if (w == -1)
			return (-1);
	}
