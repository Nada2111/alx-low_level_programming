#include "main.h"
/**
 *append_text_to_file - appends text at the end of a file.
 *@filename: is the name of the file
 *@text_content: pointer to string to add at the end of the file.
 *Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int ff;
	int ll = 0;
	int ww = 0;

	if (filename == NULL)
		return (-1);
	ff = open(filename, O_WRONLY | O_APPEND);
	if (ff == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	while (text_content[ll] != '\0')
		ll++;
	ww = write(ff, text_content, ll);
	if (ww == -1)
		return (-1);
	close(ff);
	return (1);
}
