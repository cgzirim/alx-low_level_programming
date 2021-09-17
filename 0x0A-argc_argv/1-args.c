#include <stdio.h>
/**
 * main - Prints the number of arguments passed into the program.
 * @argc: Argument counts number of commands passed
 * @argv: Collects arguments passed as an array of strings.
 * Return: Always nothing.
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}

