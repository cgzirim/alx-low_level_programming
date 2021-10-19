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
	int o, r, w;
	char *buffer;

	if (!filename)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDIN_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o);

	return (w);
}

