#include <stdio.h>
#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @src: Source
 * @dest: Destination
 * @n: Number
 * Return: Returns pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int a = 0;

	while (a < n)
	{
		dest[a] = src[a];
		a++;
	}

	return (dest);
}
