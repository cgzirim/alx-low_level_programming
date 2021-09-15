#include "main.h"
/**
 * _puts_recursion - Function prints a string, followed by a new line.
 * @s: String to be printed.
 */
void _puts_recursion(char *s)
{
int i;
i++;
if (s[i] != '\0')
putchar(s[i]);
_puts_recursion(s);
putchar('\n');
}

