#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 *
 */
char *_strcat(char *dest, char *src)
{
	size_t i;
	size_t dest_len = strlen(src);
	size_t src_len = strlen(src); 
	for(i = 0; i < src_len && src[i] != '\0'; i++)
{
	dest[dest_len + i] = src[i];
	/* dest[dest_len + 1] = '\0';*/
}
return(dest);
}

