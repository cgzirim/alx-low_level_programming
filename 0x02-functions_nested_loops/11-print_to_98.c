#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbera from
 * n to 98
 * @n: collects natural number
 */
void print_to_98(int n)
{
int i, j;
/* count down if n is greater than 98*/
if (n > 98)
{
for (i = n; i >= 98; i--)
{
printf("%d", i);
if (i > 98)
{
putchar(44);
putchar(32);
}
}
}
/* increase if n is less than 98*/
for (j = n; j <= 98; j++)
{
printf("%d", j);
if (j < 98)
{
putchar(44);
putchar(32);
}
}
putchar('\n');
}

