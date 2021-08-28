#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main block
 * Grt a random number and print the number
 * if it is greater than 5, less than but not
 * equal to zero, and equal to zero
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
		printf("Last digit of %d is greater than 5\n", n);
	if (n < 6 && n != 0)
		printf("Last digit of %d less than 6 and not 0\n", n);
	if (n == 0)
		printf("Last digit of %d is 0\n", n);
	return (0);
}
