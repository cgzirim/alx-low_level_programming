#include "main.h"
/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: Pointer to the name of the file.
 * @text_content: Text to apprnd to the end of the end of the file.
 * Return: If function fails or filename is NULL - -1.
 *         If the file doesn't exist or the user lacks write permission - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (!filename)
		return (-1);

	if (text_content)
	{
		for (len = 0; text_content[len] !=  '\0';)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o < 0 || w < 0)
		return (-1);

	close(o);
	return (1);
}

