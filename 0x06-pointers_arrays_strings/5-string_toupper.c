#include "main.h"
/**
 * string_toupper - convert lowercase characters in a string to uppercase
 * @b: the string to be converted
 * Return: a pointer to the modified string
 */

char *string_toupper(char *b)
{
int i;
for (i = 0 ; b[i] != '\0' ; i++)
{
if (b[i] >= 'a' && b[i] <= 'z')
b[i] = b[i] - 32;
}
return (b);
}
