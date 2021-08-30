#include <stdio.h>
/**
 * main - main Block
 * print a-z in lowercase
 * Return: 0
 */
int main(void)
{
char ch = 'a';
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
putchar('\n');
return (0);
}
