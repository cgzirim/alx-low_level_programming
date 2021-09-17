#include <stdio.h>
/**
 * main - prints the name of a program followed by a newline.
 * @argc: Contains the number of arguments passed to a program.
 *
 * @argv: One dimensional array of string containing all commands
 * entered into the commant prompt when running an executable.
 *
 * Return: Always nothing.
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}

