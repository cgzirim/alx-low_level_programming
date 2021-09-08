#include "main.h"
/**
 * _strncpy - function copies string
 * @src: source where string is copied from
 * @dest: destination where sting is copied to
 * @n: amount of byte src contains
 * Return: copied string, dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int j;
for (j = 0; j < n && src[j] != '\0'; j++)
dest[j] = src[j];
for ( ; j < n; j++)
dest[j] = '\0';
return (dest);
}

