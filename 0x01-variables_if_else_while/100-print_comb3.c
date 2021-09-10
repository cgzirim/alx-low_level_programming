#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - main block
 *Write a program that prints all possible different combinations of two digits
 *Return: 0
 */
int main(void)
{
int i, j;
for (i = 0; i <= 9; i++)
{
for (j = 1; j <= 9; j++)
{
if (i != j)
{
putchar(i + '0');
putchar(j + '0');
if (i < 9)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}

