#include "hash_tables.h"

/**
 * hash_table_t - Creates a hash table.
 * @size: Size of the hash table.
 *
 * Return: If function is not successful - NULL.
 *         Otherwise - pointer to newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
  hash_table_t *table;

  table = malloc(sizeof(hash_table_t) * size);
  if (!table)
    return (NULL);

  return (table);
}
