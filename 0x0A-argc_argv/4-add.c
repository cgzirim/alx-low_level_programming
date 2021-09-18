#include <stdio.h>
#include <stdlib.h>
/**
 * main - Adds numbers passed into the program and print sum.
 * @argc: Argument counts number of commands passed
 * @argv: Collects arguments passed as an array of strings.
 * Return: One if argument is not a number, else return 0.
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc < 1)
	{
		printf("%s\n", "Error");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		char *num = argv[i];

		if (!atoi(num))
		{
			printf("%s\n", "Error");
			return (1);
		}
		else
		{
		sum += atoi(num);
		}
	}
	printf("%d\n", sum);
	return (0);
}

