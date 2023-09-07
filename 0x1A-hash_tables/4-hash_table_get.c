#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_get - Retrieves a key/value pair from a hash table.
 * @ht: The hash table.
 * @key: The key to look up in the hash table.
 *
 * Return: The mapping (key/value pair) on success, or NULL on failure.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *map;

	if (!key || !ht)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);

	map = ht->array[idx];

	if (!map)
		return (NULL);

	while (map)
	{
		if (strcmp(map->key, key) == 0)
			return (map->value);
		map = map->next;
	}

	return (NULL);
}
