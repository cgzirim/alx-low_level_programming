#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 *
 * @head: Address to head if linked list.
 *
 * Return: if linked list is empty - 0,
 *         Otherwise, return node's data (n);
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	size_t n = 0;

	if ((**head).n)
		n = (**head).n;

	if (*head)
	{
		tmp = *head;
		*head = (**head).next;
		free(tmp);
	}

	return (n);
}

