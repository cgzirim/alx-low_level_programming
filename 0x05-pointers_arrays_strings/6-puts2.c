#include <stdio.h>
#include <string.h> 
#include "main.h"
/**
 *  * puts2 - outputs string
 *   * @str: collect string 
 *    */
void puts2(char *str) 
{
	int length = strlen(str);
	int i;	
	for (i = 0; i < length ; i++)
	{
		if (i % 2 == 0)
			putchar(str[i]);
	}   
	printf("\n");
}

