#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: String to be printed between numbers.
 * @n: The number of integer passed to the function.
 * ...: A variable number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;

	if (separator != NULL)
	{
		va_start(nums, n);

		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(nums, int));
			if (i != (n - 1) && separator != NULL)
				printf("%s", separator);
		}
		putchar('\n');

		va_end(nums);
	}
}

