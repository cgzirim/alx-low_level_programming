#include "main.h"
/**
 * print_alphabet_x10 - Outputs the alphabets
 * in lowercase ten times
 * Return: void
 */
void print_alphabet_x10(void)
{
int i;
for (i = 1; i <= 10; i++)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
_putchar(ch);
}
_putchar('\n');
return;
}