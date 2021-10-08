#include "lists.h"
/**
 * list_len - Returns the number of elements in a linked list_t list.
 * @h: The list_t list.
 * Return: Number of nodes.
 */
size_t list_len(const list_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		h = h->next;
	}

	return (node);
}
