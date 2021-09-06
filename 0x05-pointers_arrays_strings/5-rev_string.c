
#include <stdio.h>
#include <string.h> 
#include "main.h"
/**
 *  * print_rev - outputs reverse of a string
 *   * @s: collect string 
 *    */
void rev_string(char *s) 
{
	char *length = strlen(s);
	char *i;
	for (i = length - 1; i >= 0 ; i--)
	{
		s = s + s[i];
	} 
	
}

