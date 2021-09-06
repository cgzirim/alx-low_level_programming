#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * puts_half - outputs half of string
 * @str: collect whole string
 */
void puts_half(char *str)
{
	int length = strlen(str);
	int i;
	for (i = 0; i < length ; i++)
	{
		if (i > length / 2)
			putchar(str[i]);
	}
	printf("\n");
}

