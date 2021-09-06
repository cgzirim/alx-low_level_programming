#include "main.h"
#include <stdio.h>
/**
 * swap_int - swaps two pointers with type int
 * @a: Collects first pointer as argument
 * @b: collects second pointer
 */
void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

