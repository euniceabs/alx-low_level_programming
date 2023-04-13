#include <stdio.h>
#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area
 * @s: Array
 * @b: Byte
 * @n: Number of bytes
 * Return: Return s
*/

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int a = 0;

	while (a < n)
	{
		s[a] = b;
		a++;
	}

	return (s);
}
