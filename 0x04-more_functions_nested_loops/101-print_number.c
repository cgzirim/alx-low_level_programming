#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 * Return: Always 0.
 */
void print_number(int n)
{
if (n == 0)
putchar('0');
else if (n < 0)
{
putchar('-');
print_integer(n * -1);
}
else
print_integer(n);
}

