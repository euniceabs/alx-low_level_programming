#include "main.h"

/**
 * set_bit - the value of a bit to 1 at a given index.
 * @index: starting index
 * @n: pointer num
 * Return: Always
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	i = 1 << index;
	*n = *n | i;

	return (1);
}
