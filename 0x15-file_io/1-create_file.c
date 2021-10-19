#include "main.h"
/**
 * create_file - Creates a file.
 * @filename: Pointer to the name of the file.
 * @text_content: NULL terminated string to write to the file.
 * Return: If file can't be created or written - -1
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int len;

	if (!filename)
		return (-1);

	for (len = 0; text_content[len] != '\0';)
		len++;

	open(filename, O_RDONLY | O_CREAT | O_TRUNC, 0600);
	write(STDOUT_FILENO, text_content, len);

	return (1);
}

