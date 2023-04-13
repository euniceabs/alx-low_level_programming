#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: input
 * Return: lenght
 */

int _strlen(char *s)
{
	int a = 0;

	while (*(s + a) != '\0')
		a++;
	return (a);
}
