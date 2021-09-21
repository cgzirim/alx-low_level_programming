#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_strdup - Function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a parameter.
 * @str: String given as a parameter.
 * Return: Null if str is null and if insufficient memory was available.
 * On success return pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *s;
	unsigned long int i;

	if (str == NULL)
	{
		return ('\0');
	}

	s = (void *)malloc(sizeof(str));

	if (s == NULL)
	{
		return ('\0');
	}

	for (i = 0; i < sizeof(str); i++)
	{
	s[i] = str[i];
	}

	return (s);
}

