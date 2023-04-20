#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - this function prints strings, followed by a new line.
 * @separator: the string to be printed between the strings.
 * if separator is NULL, don’t print it.
 * @n: the number of strings passed to the function.
 * @...: variable arguments to be printed.
 * if one of the string is NULL, print (nil) instead.
 * Return: void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
	str = va_arg(args, char *);

	if (str != NULL)
	{
	printf("%s", str);
	}
	else
	{
	printf("(nil)");
	}

	if (separator != NULL && i != n - 1)
	{
	printf("%s", separator);
	}
	}

	printf("\n");
	va_end(args);
}
