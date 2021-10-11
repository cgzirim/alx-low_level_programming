#include "lists.h"
#include <stddef.h>
/**
 * listint_len - Returns number of nodes in a linked list.
 * @h: Head of linked list.
 * Return: Number if nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}

