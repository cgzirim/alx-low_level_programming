#include "main.h"
/**
 * jack_bauer - Output ever minute of the day starting from 00:00 to 23:59
 * Return: void
 */
void jack_bauer(void)
{
int m = 0, h = -1;
for (h; h <= 23; h++)
{
{
if (m == 59)
{
m = 0;
}
for (m; m <= 59; m++)
_putchar((h / 10) + '0');
_putchar((h % 10) + '0');
_putchar(':');
_putchar((m / 10) + '0');
_putchar((m % 10) + '0');
_putchar('\n');
}
}
return;
}
