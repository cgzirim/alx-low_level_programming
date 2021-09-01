#include "main.h"
#include <stdio.h>
/**
* _abs - outputs the the asolute value of an integer
* @n: This parameter collects an argument of type int
* Return: Returns the result of the function
*/
int _abs(int n)
{
if (n < 0)
n = (-1) * n;
return (n);
}
