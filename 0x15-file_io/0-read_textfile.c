#include "main.h"
#include <stdlib.h>
#include <unistd.h>
/**
 * read_textfile - Reads a text file and prints it
 * to the POSIX standard output.
 * @filename: A pointer to the name of the file to be read from.
 * @letters: number of letters that should read and print.
 *
 * Return: If the function fails or filenane is Null - 0.
 *         Otherwise: the actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer;

	if (!filename)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		free(buffer);
		return (0);
	}

	o = open(filename, O_RDONLY);
	if (o < 0)
		return (0);

	r = read(o, buffer, letters);
	if (r < 0)
	{
		free(buffer);
		return (0);
	}

	w = write(STDIN_FILENO, buffer, r);
	if (w < 0)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o);

	return (w);
}

