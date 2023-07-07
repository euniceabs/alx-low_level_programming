#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - the entry point
 * Description: this function converts a binary number,
 * given as a string,into an unsigned integer.
 * @b: the pointer to a string
 * Return: the decimal value , or 0 if an error occurs
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int num = 0;

	if (!b)
	{
	return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
	if (b[i] != '0' && b[i] != '1')
	{
	return (0);
	}
	}

	for (i = 0; b[i] != '\0'; i++)
	{
	num <<= 1;
	if (b[i] == '1')
	{
	num += 1;
	}
	}

	return (num);
}
