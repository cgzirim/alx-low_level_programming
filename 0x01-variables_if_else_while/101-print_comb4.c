#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - main block
 *Description: Print all possible different combinations of 3 digits.
 *Numbers must be separated by commas and a space.
 *The 3 digits must be different.
 *012, 120, 102, 021, 201, 210 are considered the same combination.
 *print only the smallest combination of 3 digits.
 *Numbers should be printed in ascending order.
 *You can only use `putchar` to print to console.
 *You can only use `putchar` up to 6 times.
 *You are not allowed to use any variables of type `char`.
 *Return: 0
 */
int main(void)
{
int i, j, k;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
for (k = 0; k <= 9; k++)
{
if (i < j && j < k)
{
putchar(i + '0');
putchar(j + '0');
putchar(k + '0');
if (i < 7)
{
putchar(44);
putchar(32);
}
}
}
}
}
putchar('\n');
return (0);
}

