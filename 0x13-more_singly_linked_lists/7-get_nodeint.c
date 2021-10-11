#include "lists.h"
/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: Address to the head of the linked list.
 * @index: The index of the node, starting at 0.
 *
 * Return: nth node of the listint_t linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head)
	{
		if (count == index)
		{
			return (head);
		}
		count++;
		head = head->next;
	}

	return (NULL);
}

