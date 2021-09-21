#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - Function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: Parameter collects aize of the array.
 * @c: Parameter collects specific character to
 * initialize array with.
 * Return: Null if size is less than 1 and if it fails
 * returns pointer to array if it succeeds.
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size < 1)
	{
		return ('\0');
	}

	str = malloc(sizeof(char) * size);

	if (str == NULL)
	{
		return ('\0');
	}
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}

