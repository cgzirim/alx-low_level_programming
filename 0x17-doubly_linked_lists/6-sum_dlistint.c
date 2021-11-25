#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the
 * data (n) of a dlistint_t linked list.
 * @head: Address to dlistint_t linked list.
 *
 * Return: Sum of all the data (n) in the dlistint_t linked list.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
