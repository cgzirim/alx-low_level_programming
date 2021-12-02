#include "monty.h"

/**
 * pall - Print a stacked list of nodes from the top to the bottom.
 * @bottom: Pointer to the beginning of the stack.
 * 
 * Return: Number of nodes in the stack.
 */
size_t pall(stack_t *bottom)
{
  size_t nodes = 0;
 
  /* Moving to the top of the stack*/
  while (bottom->next != NULL)
    bottom = bottom->next;
  
  /* Printing the data in nodes from the top to the bottom*/
  while (bottom)
    {
      printf("%d\n", bottom->n);
      nodes++;
      bottom = bottom->prev;
    }
  
  return (nodes);
}
