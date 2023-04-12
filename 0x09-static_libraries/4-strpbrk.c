#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - Searches a string for any bytes.
 * @s: String
 * @accept: String accept
 * Return: Null if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
				return (s);
		}
		s++;
	}
	return (0);
}
