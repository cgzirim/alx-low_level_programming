#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strcat - concatenates two strings
 * @src: source to move from
 * @dest: destination to move to
 * Return: concatenated string, dest.
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0'; j++)
		dest[i + j] = src[j];
	dest[i + j] = '\0';
	return (dest);
}

