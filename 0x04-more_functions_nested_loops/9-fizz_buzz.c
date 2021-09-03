#include <stdio.h>
/**
 * main - Output 'Fizz' in place of multiples
 * of 3. Output Buzz for multiples of 5, and FizzBuzz for multiples of 15
 * Return: return 0 always
 */
int main(void)
{
int n;
for (n = 1; n <= 100; n++)
{
if ((n % 15) == 0)
printf("FizzBuzz");
else if ((n % 5) == 0)
printf("Buzz");
else if ((n % 3) == 0)
printf("Fizz");
else
printf("%i ", n);
if (n < 100)
printf(" ");
}
printf("\n");
return (0);
}
