#include "main.h"
/**
 * _strcmp - function compares to strings
 * @s1: string one
 * @s2: string two
 * Return: 0 if s1 and s2 are equal, negative integer
 * s1 is less, positive integer if s1 is greater
 */
int _strcmp(char *s1, char *s2)
{
	int i, j;

	for (i = 0; s1[i] > 0 && s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] > 0 && s2[j] != '\0'; j++)
		;
	if (i == j)
		return (0);
	if (i < j)
		return (-15);
	if (i > j)
		return (15);
	return (0);
}

