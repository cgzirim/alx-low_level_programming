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
	int a;
	size_t i;
	const char *string = s;
	size_t length = strlen(string);
	for (i = 0; i < length; i++)
	{
		if(string[i] != ' ')
		a++;
	}
	return (a);
}

