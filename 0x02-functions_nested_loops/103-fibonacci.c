#include <stdio.h>
/**
 * main - main block
 * Description: Print the sum of even Fibonacci numbers up to a fib value
 * not exceeding 4,000,000.
 * Return: 0
 */
int main(void)
{
int count = 2;
long int i = 1, j = 2;
long int k;
printf("%lu, ", i);
while (count <= 4000000)
{
if (j % 2 == 0)
{
if (count == 50)
{
printf("%lu\n", j);
}
else
{
printf("%lu, ", j);
}
}
k = j;
j += i;
i = k;
count++;
}	
return (0);
}

