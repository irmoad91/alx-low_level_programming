#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: text file
 * @letters: number of letters
 * Return: returns the actual number of letters it could read and print
 * if filename is NULL return 0
 * 0 when function fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t wr = -1;
	int flrd;
	char *buf;
	ssize_t bytes;

	flrd = open(filename, O_RDONLY);
	if (flrd != -1)
	{
		buf = malloc(sizeof(char) * letters);
		bytes = read(flrd, buf, letters);

		if (bytes != -1)
		{
			wr = write(STDOUT_FILENO, buf, bytes);
		}
		free(buf);
		close(flrd);
	}
	return (wr);
}
