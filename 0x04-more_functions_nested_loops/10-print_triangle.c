#include "main.h"
#include <stdio.h>
/**
 * print_triangle - Outputs triangle in with the # sign
 * @size: Collect an integet for size of the tiangle
 */
void print_triangle(int size)
{
int i, j, k, l;
int b = size;
/* Print newline if size is <= zero */
if (size <= 0)
{
_putchar('\n');
}
/* Loop that handles length of the tiangle */
for (i = 0; i < size; i++)
{
b--;
/* Loop that handles width of the triangle */
for (j = 0; j < 1; j++)
{
/* Loops that define number of space and # on a line */
for (k = 0; k < b; k++)
{
_putchar(' ');
}
for (l = 0; l <= i; l++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
