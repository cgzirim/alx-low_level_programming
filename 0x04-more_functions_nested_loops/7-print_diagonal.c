#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - Outputs a diagonal line
 * @n: gets length of diagonal
 * Return: 0 Always
 */
void print_diagonal(int n)
{
int i, j;
int space = 0;
if (n <= 0)
putchar(' ');
for (i = 0; i < n; n++)
{
space++;
for (j = 0; j < space; j++)
{
putchar(' ');
}
putchar('\\');
putchar('\n');
}
return;
}
