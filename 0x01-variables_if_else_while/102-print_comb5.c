#include <stdio.h>
/**
 * main - main block
 * Description: Print all possible combinations of two two-digit numbers.
 * Return: 0
 */
int main(void)
{
	int a, b, c, d;
	int i, j;
	for (i = 0; i < 100; i++)
	{
		for (j = 1; j < 100 ; j++)
		{
			/* first num*/
			a = i / 10;/* f digit*/
			b = i % 10;/* s digit*/
			/* second num*/
			c = j / 10;/* f digit*/
			d = j % 10;/* s digit*/
			
			if(b == d || d == b)
			{
				continue;
			}
			else
			{
			putchar(a + 48);
			putchar(b + 48);
			putchar(32);
			putchar(c + 48);
			putchar(d + 48);

		/*	if (a != 9 && b != 8)*/
			
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
