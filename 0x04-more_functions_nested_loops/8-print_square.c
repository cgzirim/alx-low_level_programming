#include <stdio.h>
#include "main.h"
/**
 * print_square - prints a square of size size
 * @size: size of square
 *
 * Return: void
 */
void pribt_square(int size)
{
int i, j;
for (i = 0; i <= size; i++)
{
if (size >  0)
{
for (j = 0; j <= size; j++)
{
putchar('#');
putchar('\n');
}
}
}
}
