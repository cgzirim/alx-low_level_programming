#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _atoi - outputs all numbers in a string
 * @s: Collects string
 * Return: integer in string
 */
int _atoi(char *s)
{
int sign = 1;
unsigned int number = 0;
char null_flag = 0;
while (*s)
{
if (*s == '-')
sign *= -1;
if (*s >= '0' && *s <= '9')
{
null_flag = 1;
number =  number * 10 + *s - '0';
}
else if (null_flag)
break;
s++;
}
if (sign < 0)
number = (-number);
return (number);
}
