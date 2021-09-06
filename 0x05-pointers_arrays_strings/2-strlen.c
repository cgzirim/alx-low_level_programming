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
	char string[] = *s;
	int a;
	int i;
	for (i = 0; i <= strlen(string); i++)
	{
		if(string[i] != ' ')
		a += i;
	}
	return (a);
}

