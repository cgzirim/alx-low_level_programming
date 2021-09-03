#include "main.h"
#include <stdio.h>
/**
 * more_numbers - output 10 times the numbers, from 0 to 14
 * Return: Always 0.
 */
void more_numbers(void)
{
int n;
int i;
for (n = 0; n <= 9; n++)
{
for (i = 0; i <= 14; i++)
{
if (i >= 10)
{
putchar(i / 10 + '0');
putchar(i % 10 + '0');
}
else
{
putchar(i + '0');
}
}
putchar('\n');
}
}
