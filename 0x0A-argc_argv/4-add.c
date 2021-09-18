#include <stdio.h>
#include <stdlib.h>
/**
 * main - Adds numbers passed into the program and\ print sum.
 * @argc: Argument counts number of commands passe\d
 * @argv: Collects arguments passed as an array of\ strings.
 * Return: One if argument is not a number, else r\eturn 0.
 */
int main(int argc, char *argv[])
{
	int count = 1;
	int sum = 0;

	if (argc < 1)
	{
		printf("%s", "Error\n");
		return (1);
	}
	while (count < argc)
	{
		char *argument = argv[count];

		if (!atoi(argument))
		{
			printf("%s\n", "Error");
			return (1);
		}
		else
		{
			sum += atoi(argument);
		}
		count++;
	}
	printf("%d\n", sum);
	return (0);
}

