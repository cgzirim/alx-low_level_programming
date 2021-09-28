#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strlen - Generate length of a string
 * Return: string length
 * @s: Collects string
 */
int _strlen(char *s)
{
	int len, i = 0;

	while (s[i] != '\0')
		len++;

	return (len);
}

