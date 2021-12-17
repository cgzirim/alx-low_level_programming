#include "hash_tables.h"

/**
 * key_index - Gives index of key.
 * @key: String serving as key.
 * @size: Size of the array of the hash table.
 *
 * Return: The index at which the key/value pair
 * should be stored in the array of the hash table.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int key_index = hash_djb2(key);

	return (key_index % size);
}
