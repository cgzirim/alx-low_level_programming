#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 *print_array - outputs array
 * Elements of array separated by comma and space
 * @a: collect integer
 * @n: determines number of elements in array
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i <= n; i++)
{
printf("%d,", a[i]);
putchar(' ');
}
printf("\n");
}

