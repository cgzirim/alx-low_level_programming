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
	int b = n % 10; /*b stands for last digit*/

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (b > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, b);
	if (b < 6 && b != 0)
		printf("Last digit of %d is %d & is less than 6 & not 0\n", n, b,);
	if (b == 0)
		printf("Last digit of %d is %d and is 0\n", n, b);
	return (0);
}
