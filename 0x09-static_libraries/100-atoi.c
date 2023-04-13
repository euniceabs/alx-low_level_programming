#include <stdio.h>
#include "main.h"

/**
 * _atoi -  convert a string to an integer
 * @s: String
 * Return: int value
 */

int _atoi(char *s)
{
	int str = 1;
	unsigned int val = 0;

	do {
		if (*s == '-')
			str *= -1;
		else if (*s >= '0' && *s <= '9')
			val = (val * 10) + (*s - '0');
		else if (val > 0)
			break;
	} while (*s++);

	return (val * str);
}
