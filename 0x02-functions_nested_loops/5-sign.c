#include "main.h"
/**
 * print_sign - Print output based on integrr sign
 * @n: Parrameter that takes an argument of type int
 *Return: return 1 if integer sign is positive, -1 if negative and 0 if neutral
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (1);
}
else
{
_putchar('0');
return (0);
}
}
