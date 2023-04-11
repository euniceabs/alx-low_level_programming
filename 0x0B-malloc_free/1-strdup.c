#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the string to be copied.
 * Return: a pointer to the copied string, or NULL if it fails.
 */
char *_strdup(char *str)
{
unsigned int a, q;
char *s;
if (str == NULL)
return (NULL);
for (a = 0; str[a]; a++)
;
a++;
s = malloc(a * sizeof(char));
if (s == NULL)
{
return (NULL);
}
for (q = 0; q < a; q++)
{
s[q] = str[q];
}
return (s);
}
