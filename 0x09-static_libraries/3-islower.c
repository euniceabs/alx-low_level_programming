#include "main.h"

/**
 * _islower - Shows 1 if the input is a lowercase character.
 * @c: Lowercase alphabet
 * Return: 1 for lowercase character. 0 for the rest.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
