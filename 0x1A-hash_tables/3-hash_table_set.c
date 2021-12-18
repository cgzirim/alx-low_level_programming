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
	hash_node_t *node;
	unsigned long int index;
	char *value_copy;

	if (!ht || !key || *key == '\0' || !value)
		return (0);

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);

	value_copy = strdup(value);
	if (!value_copy)
	  {
		  free(node);
		  return (0);
	  }
	node->key = strdup(key);
	if (!node->key)
	{
		free(node);
		return (0);
	}
	node->value = value_copy;

	/* Get index for the element key.*/
	index = key_index((const unsigned char *)key, ht->size);
	if (!index)
	{
		free(node);
		return (0);
	}

	node->next = ht->array[index];
	ht->array[index] = node;

	return (1);
}
