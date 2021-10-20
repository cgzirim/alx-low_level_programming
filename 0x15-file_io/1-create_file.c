#include "main.h"
#include <unistd.h>
/**
 * create_file - Creates a file.
 * @filename: Pointer to the name of the file.
 * @text_content: NULL terminated string to write to the file.
 * Return: If file can't be created or written - -1
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int len, o, w;

	if (!filename || !text_content)
		return (-1);

	for (len = 0; text_content[len] != '\0';)
		len++;

	o = open(filename, O_RDWR | O_CREAT | O_TRUNC,  0600);
	if (o < 0)
		return (-1);


	w = write(STDOUT_FILENO, text_content, len);
	if (w != len)
		return (-1);

	close(o);
	return (1);
}

