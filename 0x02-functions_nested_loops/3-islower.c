#include "main.h"
/**
 * _islower(int c) checks if a character is
 * in lower case
 * Return: Function returns 1 if argument is in lowercase and 0 if otherwise.
 * c: Parameter to take an argument
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
