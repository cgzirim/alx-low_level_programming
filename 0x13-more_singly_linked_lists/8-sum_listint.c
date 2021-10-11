#include "lists.h"
/**
 * sum_listint - Returns the sum of all the data
 *               (n) of a listint_t linked list.
 * @head: Address to the head of the linked list.
 *
 * Return: If list is empty - 0,
 *         otherwise, the sum of all data (n) of the listint_t linked list.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

