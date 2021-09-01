#include "main.h"
/**
 * print_last_digit - Outputs the last digit of an integer
 * @n: Parameter that collects an integer as an argumen
 * Return: Returns the result of the function
 */  
int print_last_digit(int n)
{
n = n % 10;
_putchar(n + '0');
return (n);
}
