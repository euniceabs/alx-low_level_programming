#include "main.h"

/**
 * _strstr - locates a substring
 *
 * @haystack: the longer string to search
 * @needle: the first occurrence of the substring
 *
 * Return: a pointer beg of substring or @Null if it not foound.
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int r = 0, a = 0;

	while (haystack[r])
	{
		while (needle[a] && (haystack[r] == needle[0]))
		{
			if (haystack[r + a] == needle[a])
				a++;
			else
				break;
		}
		if (needle[a])
		{
			r++;
			a = 0;
		}
		else
			return (haystack + r);
	}
	return (0);
}
