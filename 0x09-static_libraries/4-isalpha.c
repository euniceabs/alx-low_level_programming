#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character
 * @c: lower or upper case
 * Return: 1 for lower or uppercase. 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
