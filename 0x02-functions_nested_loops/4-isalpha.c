#include "holberton.h"
/**
 * _islower - checks if a character is
 * in lower case or uppercase
 * Return: Function returns 1 if argument is in lowercase or uppercase  and 0 if otherwise.
 * @c:  Parameter to take an argument
 */
int _islower(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
