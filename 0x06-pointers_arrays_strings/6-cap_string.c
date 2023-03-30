#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string
 * @b: char type pointer
 * Return: pointer
 */

char *cap_string(char *b)
{
int i;
int j;
char c[] = {44, 59, 46, 33, 63, 34, 40, 41, 123, 125, 32, 10, 9};
i = 0;
while (b[i] != '\0')
{
if (i == 0 && b[i] >= 97 && b[i] <= 122)
{
b[i] = b[i] - 32;
}
j = 0;
while (c[j] != '\0')
{
if (c[j] == b[i] && (b[i + 1] >= 97 && b[i + 1] <= 122))
{
b[i + 1] = b[i + 1] - 32;
}
j++;
}
i++;
}
return (b);
}
