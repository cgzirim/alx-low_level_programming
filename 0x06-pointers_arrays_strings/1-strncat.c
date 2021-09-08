#include "main.h"
/**
 * _strncat - function concatrnates two strings
 * @src: pointer variable (source)
 * @dest: pointer vatiable (destination)
 * @n: amount of byte src contains
 * Return: concatenated string, dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j;
for (i = 0; dest[i] != '\0'; i++)
;
for (j = 0; j < n && src[j] != '\0'; j++)
dest[i + j] = src[j];
return (dest);
}
