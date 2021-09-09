#include "main.h"
#include <stddef.h>
/**
 * string_toupper - Converts lowercase to uppercase
 * @c: collects string in lowercase
 * Return: converted string
 */
char *string_toupper(char *c)
{
	int i;
	while(c[i] != '\0')
	{
		if (c[i] > 96 && c[i] < 123)
		{
			i++;
			c[i] -= 32;
		}
	}
	return (c);
}

