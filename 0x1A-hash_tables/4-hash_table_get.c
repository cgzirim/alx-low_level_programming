#include "hash_tables.h"

/**
 * hash_table_get - Retrieves the value associated with a key.
 * @ht: The hash table to look into for the key.
 * @key: The key to be sought.
 *
 * Return: If function is successful - value associated with key.
 *         Otherwise - NULL.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (!ht || !key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node)
	{
	if (strcmp(node->key, key) == 0)
		return (node->value);
	node = ht->array[index]->next;
	}
	return (NULL);
}
