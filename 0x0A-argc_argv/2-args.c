#include <stdio.h>
/**
 * main - Prints all arguments passed into the program.
 * @argc: Argument counts number of commands passed
 * @argv: Collects arguments passed as an array of strings.
 * Return: Always nothing.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

