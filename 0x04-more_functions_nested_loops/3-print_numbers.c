#include "main.h"
/**
 * print_numbers - Output integer 0-9
 * Return: Always 0.
 */
void print_numbers(void)
{
int n;
for (n = 0; n <= 9; n++)
putchar(n + '0');
putchar('\n');
return;
}
