#include "main.h"
#include <stdio.h>
/**
 * more_numbers - output 10 times the numbers, from 0 to 14
 * Return: Always 0.
 */
void more_numbers(void)
{
int n,i;
for (n = 0; n <= 14; n++)
{
for(i = 0; i <= 10; i++)
{
putchar(n + '0');
}
putchar('\n');
}
return;
}
