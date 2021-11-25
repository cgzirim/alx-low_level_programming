#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: Address to dlistint_t linked list.
 * @index: Index is the index of the node, starting from 0.
 *
 * Return: if the node does not exist - NULL.
 *         Otherwise, pointer to nth node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int nodes = 0;

	while (head)
	{
		nodes++;
		head = head->next;
		if (index == nodes)
			return (head);
	}

	return (NULL);
}
