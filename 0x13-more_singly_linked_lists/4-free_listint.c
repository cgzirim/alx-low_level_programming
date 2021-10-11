#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - Frees a listint_t list.
 * @head: Address to listint_t list.
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}

