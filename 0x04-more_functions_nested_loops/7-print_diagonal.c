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
int a = 0;
for (i = 0; i < n; i++)
{
if (n <= 0)
{
putchar('\n');
}
else
{
a++;
for (j = 0; j <= a; j++)
{
putchar(' ');
}
putchar('\\');
putchar('\n');
}
}
return;
}
