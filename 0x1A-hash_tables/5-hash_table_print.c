#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - Prints all key-value pairs in the hash table.
 * @ht: A pointer to the hash table.
 *
 * Return: Nothing.
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int j;
	int flag = 0;

	if (!ht)
		return;

	putchar('{');

	for (j = 0; j < ht->size; j++)
	{
	hash_node_t *map = ht->array[j];

	if (!map)
		continue;

	while (map->next)
	{
		if (flag)
			printf(", ");
		printf("'%s': '%s'", map->key, map->value);
		map = map->next;
	}

	if (flag)
		printf(", ");

	printf("'%s': '%s'", map->key, map->value);

	if (!flag)
		flag = 1;
	}

	printf("}\n");
}

