#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - Frees a listint_t list and sets head to NULL.
 * @head: Address of listint_t list to free.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (!head)
		return (NULL);

	while (*head)
	{
		tmp = *head;
		*head = (**head).next;
		free(tmp);
	}

	*head = NULL;
}

