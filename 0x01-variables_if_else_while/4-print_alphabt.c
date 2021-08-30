#include <stdio.h>
/**
 * main - man Block
 * print alphabet in lowercase
 * don't print 'q' and 'e'
 * Return: 0
 */
int main(void)
{
  char ch;
  for (ch = 'a'; ch <= 'z'; ch++)
    {
      if (ch != 'q' && 'e')
	(putchar(ch));
    }

  return (0);
}
