#include "main.h"

/**
 * _strncpy - a function that copies a string
 * @dest: the destination string
 * @src: the source string
 * @n: number of strings
 * Return: destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0 ; i < n ; i++)
dest[i] = src[i];
return (dest);
}
