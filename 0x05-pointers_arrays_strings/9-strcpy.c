#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * _strcpy - copies sting to another memory location.
 * @dest: receives string
 * @src: copied from
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	*(dest + i + 1) = '\0';

	return (dest);
}

