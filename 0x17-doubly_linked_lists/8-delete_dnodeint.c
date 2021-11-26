#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at
 * index of a dlistint_t linked list.
 * @head: Address to the linked list.
 * @index: Index of the node that should be deleted. Starts at 0.
 * Return: If functuon is successful - 1.
 *         Otherwise - -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (-1);
	}

	if (tmp == *head)
	{
		*head = tmp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		tmp->prev->next = tmp->next;
		if (tmp->next != NULL)
			tmp->next->prev = tmp->prev;
	}

	free(tmp);
	return (1);
}
