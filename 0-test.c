#include <stdio.h>
/**
 * modif_my_char_var - Solve me
 *
 *  * Return: nothing.
 *   */
 void modif_my_char_var(char *cc, char ccc)  
{
	printf("Value of 'p': %p\n and 'c': %c\n", cc, ccc);
	printf("Address of 'p': %p\n", &cc);
	*cc = 'o';
	ccc = 'l';
}

/**
 * main - Solve me
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;
	char *p;

	p = &c;
	c = 'H';
       	modif_my_char_var(p, c);
	printf("P: %p and C: %c\n", p, c);
	return(0);
}

