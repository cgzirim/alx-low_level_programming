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
	unsigned int i, j, l1;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	l1 = sizeof(s2);

	str = (char *)malloc((l1 + n) * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];

	for (j = 0; j < n /*&& s2[j] != '\0'*/; j++, i++)
		str[i] = s2[j];

	return (str);
}

