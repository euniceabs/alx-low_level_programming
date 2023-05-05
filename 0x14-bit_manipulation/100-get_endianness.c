#include "main.h"
/**
 * get_endianness - to checks the endianness
 *
 * Return: Always 0
 */
int get_endianness(void)
{
	int i;
	char *c;

	i = 1;
	c = (char *)&i;

	return (*c);
}
