#include "main.h"
#include <string.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the file to create
 * @text_content: the string to add to end of the file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
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

	flrd = open(filename, O_WRONLY | O_APPEND);
	wr = write(flrd, text_content, len);

	if (flrd == -1 || wr == -1)
		return (-1);

	close(flrd);
	return (1);
}
