#include "hash_tables.h"

/**
 * hash_table_print - Print all keys/values in a hash table.
 * @ht: Hash table to be printed.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	int n;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		n = 0;
		while (node)
		{
			if (n)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			node = ht->array[i]->next;
			n = 1;
		}
	}
	printf("}\n");
}
