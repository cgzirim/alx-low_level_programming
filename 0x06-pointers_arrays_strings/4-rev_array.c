#include "main.h"
/**
 * reverse_array - function reverses an array
 * @a: pointer that collects array
 * @n: length of array
 */
void reverse_array(int *a, int n)
{
	int i;
	int b;
	for (i = 0; i < (n / 2); i++)
	{
		b = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = b;
	}
}

