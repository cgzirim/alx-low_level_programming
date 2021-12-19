#include "hash_tables.h"

/**
 * hash_table_print - Print all keys/values in a hash table.
 * @ht: Hash table to be printed.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	int comma_flag = 0;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];

			while (node)
			{
				if (comma_flag)
					printf(", ");
				printf("'%s': '%s'", node->key, node->value);
				node = ht->array[i]->next;
				comma_flag = 1;
			}
		}
	}
	printf("}\n");
}
