#include "lists.h"

/**
 * dlistint_len - Return the number of elements in a linked dlistint_t list.
 * @h: Pointer to the linked dlistint_t list.
 *
 * Return: Number oqf nodes in dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
