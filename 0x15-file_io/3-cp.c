#include "main.h"
/**
 * main - Copies the content of a file to another file.
 * @argc: Argument count.
 * @argv: Array if arguments passed.
 * Return: Always nothing.
 */
int main(int argc, char **argv)
{
/* file from, file to, close ff, close ft */
	int ff, ft, cff, cft, r, w, err;
	char *buffer;

	if (argc < 2)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	if (!argv[1])
	{
		dprintf(2, "Error: Can't read from file%s\n", argv[1]);
		exit(98);
	}

	buffer = malloc(sizeof(char) * 1024);
	ff = open(argv[1], O_RDWR);
	ft = open(argv[2], O_RDWR | O_CREAT | O_TRUNC, 0664);
	r = read(ff, buffer, 1024);
	w = write(ft, buffer, r);

	if (ff < 0 || !argv[1])
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (ft < 0 || w < 0)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	cff = close(ff);
	cft = close(ft);

	if (cff < 0 || cft < 0)
	{
		if (cff < 0)
			err = cff;
		else
			err = cft;

		dprintf(2, "Error: Can't close fd %d", err);
		exit(100);
	}

	return (0);
}

