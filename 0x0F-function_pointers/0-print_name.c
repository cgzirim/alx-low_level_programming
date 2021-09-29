#include "function_pointers.h"

/**
 * print_name - Function prints a name.
 * @name: Name to print.
 * @f: Callback function.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

