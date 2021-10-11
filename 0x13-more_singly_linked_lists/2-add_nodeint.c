#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 * @head: Head of linked list.
 * @n: Integer value for the new node.
 * Return: Address of new node or
 *         Null if new node is false.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}

