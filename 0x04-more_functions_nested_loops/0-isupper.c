#include "main.h"
/**
 * _isupper - Checks for uppercase
 * Return: 1 if c is in uppercase if not return 0.
 * @c: Parameter that collects an argument of type int
 */
int _isupper(int c)
{
if ((c >= 'A') && (c <= 'Z'))
return (1);
else
return (0);
}

