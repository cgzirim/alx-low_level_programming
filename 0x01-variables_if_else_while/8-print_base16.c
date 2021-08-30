#include <stdio.h>
/**
 * main - main Block
 * output all hexadecimal numbers
 * Return: 0
 */
int main(void)
{
int num;
char ch;
for (num = 0; num <= 9; num++)
putchar(num + '0');
for (ch = 'a'; ch <= 'f'; ch++)
putchar(ch);
putchar('\n');
return (0);
}
