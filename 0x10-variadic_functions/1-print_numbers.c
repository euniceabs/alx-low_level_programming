#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints n numbers separated by a separator string
 * followed by a new line
 * @separator: string to separate numbers (or NULL if none)
 * @n: number of integers to print
 * @...: integers to print
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
	printf("%d", va_arg(args, int));
	if (separator != NULL && i < n - 1)
	{
	printf("%s", separator);
	}
	}

	printf("\n");
	va_end(args);
}
