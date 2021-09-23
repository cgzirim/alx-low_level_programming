#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: First string.
 * @s2: Second string.
 * @n: bytes of s2 to be concatenated.
 * Return: NULL if function wasnt successful else,
 * return pointer to concatenated string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, len;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len++;

	str = malloc((len + n + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);

	len = 0;
	for (i = 0; s1[i]; i++)
		str[len++] = s1[i];

	for (j = 0; s2[j] && j < n; j++)
		str[len++] = s2[j];

	str[len] = '\0';

	return (str);
}

