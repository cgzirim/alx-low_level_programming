#include "main.h"
/**
 * print_numbers - Output integer 0-9
 * Return: Always 0.
 */
int print_numbers(void)
{
int n;
for (n = 0; n <= 9; n++)
_putchar(n + '0');
_putchar('\n');
return (0);
}