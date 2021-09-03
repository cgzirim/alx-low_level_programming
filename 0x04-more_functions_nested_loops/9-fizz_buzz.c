#include <stdio.h>
#include "main.h"
/**
 * fizz_buzz - Output 'Fizz' in place of multiples of 3. Output Buzz for multiples of 5, and Fizz Buzz for multiples of 15
 * Return: return 0 always
 */
void fizz_buzz(void)
{
int n;
char *a = "Fizz";
char *b = "Buzz";
char *c = "FizzBuzz";
for (n = 0; n < 100; n++)
{
if ((n % 3) == 0)
{
printf("%s ", a);
}
else if ((n % 5) == 0)
{
printf("%s ", b);
}
else if ((n % 15) == 0)
{
printf("%s ", c);
}
else
{
printf("%d ", n);
}
}
return;
}
