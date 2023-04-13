#include "main.h"

/**
 * string_nconcat - concatenates two strings up to n bytes
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * @n: maximum number of bytes of s2 to concatenate
 * Return: pointer to newly allocated space in memory
 * containing concatenated string or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1 = 0, len2 = 0, i, j;
char *res;
if (s1 != NULL)
{
while (s1[len1] != '\0')
len1++;
}
if (s2 != NULL)
{
while (s2[len2] != '\0')
len2++;
if (len2 > n)
len2 = n;
}
res = malloc(sizeof(char) * (len1 + len2 + 1));
if (res == NULL)
return (NULL);
for (i = 0; i < len1; i++)
res[i] = s1[i];
for (j = 0; j < len2; j++)
res[i + j] = s2[j];
res[i + j] = '\0';
return (res);
}
