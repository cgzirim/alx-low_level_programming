#include <stdio.h>
/**
 * main - output the alphabet in reverse order
 * Return: 0
 */
int main(void)
{
char ch;
for (ch = 'z'; ch >= 'a'; ch--)
putchar(ch);
putchar('\n');
}
