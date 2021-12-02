#include "monty.h"

/**
 * push - Push a new node to a stack.
 * @bottom: Address to the beginning of the stack.
 * @n: Data for new node.
 *
 * Return: If function is successful - pointer to the bottom
 */
stack_t *push(stack_t **bottom, const int n)
{
  stack_t *new, *top;

  new = malloc(sizeof(stack_t));
  if (!new)
    {
      fprintf(stderr, "Error: malloc failed");
      exit(EXIT_FAILURE);
    }
  new->n = n;
  new->next = NULL;

  /*Check if stack is empty*/
  if (*bottom == NULL)
    {
      new->prev = NULL;
      *bottom = new;
    }
  else
    {
      top = *bottom;
      while (top->next != NULL)
	top = top->next;
      new->prev = top;
      top->next = new;
    }

  return (*bottom);
}
