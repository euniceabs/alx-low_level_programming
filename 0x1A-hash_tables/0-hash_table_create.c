#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - this function generates a hash table of a
 * given dimension
 * @size: hash table size
 *
 * Return: The hash table created, or NULL if function fails
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	hash_node_t **array;
	unsigned long int j;

	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
	return (NULL);

	array = malloc(sizeof(hash_node_t *) * size);
	if (array == NULL)
	{
	free(hash_table);
	return (NULL);
	}

	for (j = 0; j < size; j++)
	array[j] = NULL;

	hash_table->array = array;
	hash_table->size = size;

	return (hash_table);
}
