#include "main.h"

/**
 * rot13 - encodes a string into rot13
 * @u: string to encode
 *
 * Return: address of u
 */
char *rot13(char *u)
{
int i, j;
char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

for (i = 0; *(u + i); i++)
{
for (j = 0; j < 52; j++)
{
if (a[j] == *(u + i))
{
*(u + i) = b[j];
break;
}
}
}
return (u);
}
