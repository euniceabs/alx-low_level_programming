#include "main.h"

/**
 * _strcmp - a function that compares two strings
 * @s1: the pointer to the first string
 * @s2: the pointer to the second string
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
int i;
for (i = 0; s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i]; i++)
;
return (s1[i] - s2[i]);
}
