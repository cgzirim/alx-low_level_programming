#include <stdio.h>
#include <stdlib.h>
/**
 * main - Multiplies two arguments passed into the program and print product.
 * @argc: Argument counts number of commands passed
 * @argv: Collects arguments passed as an array of strings.
 * Return: One if there are bo two arguments, else return 0.
 */
int main(int argc, char *argv[])
{
	int product = 0, a, b;

	if (argc != 3)
	{
		printf("%s", "Error\n");
		return (1);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		product = a * b;
		printf("%d\n", product);
	}
	(void)argc;
	return (0);
}

