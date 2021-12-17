#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table to add or update the key/value to.
 * @key: The key.
 * @value: The value associated with the key.
 *
 * Return: If function is successful - 1.
 *         Otherwise - 0.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node, *last;
	unsigned long int index;

	if (!key || strlen(key) == 0)
		return (0);
	if (!value || strlen(value) == 0)
		return (0);

	if (!ht)
		return (0);

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);

	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;

	/* Get index for the element key.*/
	index = key_index((const unsigned char *)key, ht->size);
	if (!index)
		return (0);

	/* Input pointer to node at index.*/
	if (ht->array[index] == NULL)
		ht->array[index] = node;
	else
	{
		last = ht->array[index];
		while (last->next != NULL)
			last = last->next;
		last->next = node;
	}

	return (1);
}
