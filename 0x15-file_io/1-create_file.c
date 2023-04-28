#include "main.h"

/**
 * create_file -create a function that creates a file
 * @filename:  is the name of the file to create
 * @text_content: terminated string to write to the file
 * Return: filename is NULL return -1
 **/
int create_file(const char *filename, char *text_content)
{
	int ff;
	int ll = 0;
	int ww = 0;

	if (filename == NULL)
		return (-1);
	ff = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (ff == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	while (text_content[ll] != '\0')
		ll++;
	wrw = write(fd, text_content, ll);
	if (ww == -1)
		return (-1);
	close(ff);
	return (1);
}
