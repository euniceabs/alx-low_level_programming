#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: pointer to pieces to print
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int r, g;

	for (r = 0; r < 8; r++)
	{
		for (g = 0; g < 8; g++)
		{
			_putchar(a[r][g]);
		}
		_putchar('\n');
	}
}
