#include "main.h"
#include <string.h>

/**
 * create_file - a function that creates a file
 * @filename: the file to create
 * @text_content: the string to write the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int flrd;
	int wr;
	int len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		len = strlen(text_content);
	}

	flrd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (flrd == -1)
		return (-1);
	wr = write(flrd, text_content, len);
	close(flrd);

	if (wr == -1)
		return (-1);

	return (-1);
}
