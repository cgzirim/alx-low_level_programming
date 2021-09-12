#include "main.h"
#include <stdio.h>
/**
 * print_times_table - Print the n times table, starting with 0
 * Description: print nothing if n is greater than
 * 15 or less than 0
 * Return: 0
 */
void print_times_table(int n)
{
int x = 0; /* factor */
int y; /* count  */
int z; /* computed value */
if (!(n > 15 || n < 0))
{
while (x <= n)
{
y = 0;
while (y <= n)
{
z = x * y;
if (z > 99)
{
	putchar(z / 100 + '0');
	putchar((z / 10 % 10) + '0');
	putchar(z % 10 + '0');
}
else if (z > 9)
{
putchar(' ');
putchar(z / 10 + '0');
putchar(z % 10 + '0');
}
else if (y != 0)
{
putchar(' ');
putchar(' ');
putchar(z + '0');
}
else
{
putchar(z + '0');
}
if (y != n)
{
putchar(',');
putchar(' ');
}
y++;
}
putchar('\n');
x++;
}
}
}
