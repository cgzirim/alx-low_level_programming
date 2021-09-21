#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *str_concat - Function concatenates two strings.
 * @s1: Parameter collects first string.
 * @s2: Parameter collects second string.
 * Return: Null if insufficient memory was available.
 * return pointer to concatenated string if function was successful.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned long int l1, l2, l3, i, j;
	char *str;

	/* Get length of s1*/
	for (l1 = 0; s1[l1] != '\0'; l1++)
	{
		;
	}

	/* Get length of s2*/
	for (l2 = 0; s2[l2] != '\0'; l2++)
	{
		;
	}

	/* Sum l1 and l2 to get length of l3*/
	l3 = l1 + l2;

	str = (void *)malloc(sizeof(char) * l3);
	if (str == NULL)
	{
		return ('\0');
	}

	/* Add s1 to str*/
	for (i = 0; i < l1; i++)
	{
		str[i] = s1[i];
	}

	/* Add s2 to str*/
	for (j = 0; j < l2; j++, i++)
	{
		str[i] = s2[j];
	}
	return (str);
}

