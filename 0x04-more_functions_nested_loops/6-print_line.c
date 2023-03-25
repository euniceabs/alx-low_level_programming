#include "main.h"

/**
 * print_line - prints straight line n times.
 * @n: number of times a straight line is printed.
 * ASCII was used in line 14
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
