#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Address to the linked lists
 * @idx: Index of the list where the new node should be added.
 * @n: New node's data.
 *
 * Return: Address of new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *nth_node = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		if (nth_node == NULL)
			return (NULL);
		nth_node = nth_node->next;
	}

	if (nth_node->next == NULL)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = nth_node;
	new_node->next = nth_node->next;
	nth_node->next->prev = new_node;
	nth_node->next = new_node;

	return (new_node);
}
