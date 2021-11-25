#include "lists.h"

/**
 * add_dnodeint_end - Add a new node at the end of a dlistint_t list.
 * @head: Address to the dlistint_t list.
 * @n: New node's data.
 *
 * Return: If function is successful - address of new node.
 *         Otherwise - NULL.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *last;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		new->prev = last;
		last->next = new;
	}

	return (*head);
}
