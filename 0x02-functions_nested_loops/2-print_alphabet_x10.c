#include "holberton.h"
/**
 * print_alphabet_x10 - Outputs the alphabets
 * in lowercase trn times
 */
void print_alphabet_x10(void)
{
for (int i = 1; i <= 10; i++)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
_putchar(ch);
_putchar(ch);
}
}
