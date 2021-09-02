#include "main.h"
#include <stdio.h>
/**
 * _isupper - Checks for uppercase
 * Return: 1 if c is in uppercase if not return 0.
 */
int _isupper(int c)
{
char ch;
for (ch = 'A'; ch <= 'Z'; ch++)
if (c == ch)
return (1);
else
return (0);
}
