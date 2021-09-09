#include "main.h"
#include <stdio.h>
/**
 * print_number - outputs integer
 * @: interger
 */
void print_number(int n)
{
	int sn = sizeof(n) / sizeof(int);
	int digit[sn];
	int i;
	for (i = sn; i > 0; i--)
	{
		digits[i] = n % 10;
		n = n / 10;
		purchar(digits[i] + '\0');
	}
	putchar('\n');
}

