#include "main.h"
/**
 * leet -  encods a sting into 1337
 * @f: string to be encoded
 * Return: f
 */

char *leet(char *f)
{
int i;
int j;
char *a = "aAeEoOtTlL";
char *b = "4433007711";
for (i = 0 ; f[i] != '\0' ; i++)
{
for (j = 0 ; a[j] != '\0' ; j++)
{
if (f[i] == a[j])
f[i] = b[j];
}
}
return (f);
}
