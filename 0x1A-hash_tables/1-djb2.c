#include "hash_tables.h"

/**
 * hash_djb2 - Compute the hash value of a string using the djb2 algorithm.
 * @str: The string to be used in generating the hash value
 *
 * Return: The hash value.
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int j;

	hash = 5381;
	while ((j = *str++))
	{
		hash = ((hash << 5) + hash) + j; /* hash * 33 + j */
	}
	return (hash);
}
