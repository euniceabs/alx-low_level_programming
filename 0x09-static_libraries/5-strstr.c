#include "main.h"
#include <stdio.h>

/**
 * _strstr - function that locates a substring
 * @haystack: String
 * @needle: Substring
 * Return: NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int a = 0, b = 0;

	while (haystack[a])
	{
		while (needle[b] && (haystack[a] == needle[0]))
		{
			if (haystack[a + b] == needle[b])
				b++;
			else
				break;
		}
		if (needle[b])
		{
			a++;
			b = 0;
		}
		else
			return (haystack + a);
	}
	return (0);
}
