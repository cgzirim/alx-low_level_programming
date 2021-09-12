#include <stdio.h>
/**
 * main - main block
 * Description: Print the first 50 fibonacci numbers, starting with 1 and 2.
 * Numbers must be coma and space separated.
 * Return: 0
 */
int main(void)
{
long int i = 1;
long int n1 = 1, n2 = 2, n3;
printf("%lu", n1);
while (i <= 50)
{
n3 = n1 + n2;
printf("%lu", n3);
n1 = n2;	
n2 = n3;
if (i < 50)
printf(", ");
i++;
}
printf("\n");
return (0);
}

