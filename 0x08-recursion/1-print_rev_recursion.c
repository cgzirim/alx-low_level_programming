#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - Function prints a string in reverse.
 * @s: String to be reverse.
 */
void _print_rev_recursion(char *s)
{
if (*s)
{
putchar(*s);
_print_rev_recursion(s - 1);
}
else
{
putchar('\n');
}
}

