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
float a = length;
int b;
int d = 2;
for (i = 0; i < length ; i++)
{
b++;
if (b >= a / d)
putchar(str[i]);
}
printf("\n");
}

