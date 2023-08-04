#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: number
 * @index: starting index
 * Return: Always
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	i = ~(1 << index);
	*n = *n & i;

	return (1);
}
