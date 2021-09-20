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
	int i, j;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		char *argument = argv[i];

		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				printf("%s\n", "Error");
				return (1);
			}
		}

		if (!atoi(argument))
		{
			printf("%s\n", "Error");
			return (1);
		}

		else
		{
			sum += atoi(argument);
		}
	}
	printf("%d\n", sum);
	return (0);
}

