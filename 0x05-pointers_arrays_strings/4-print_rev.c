
#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * print_rev - outputs reverse of a string
 * @s: collect string
 */
void print_rev(char *s)
{
int length = strlen(s);
int i;
for (i = length - 1; i >= 0 ; i--)
{
putchar(s[i]);
}
printf("\n");
}
