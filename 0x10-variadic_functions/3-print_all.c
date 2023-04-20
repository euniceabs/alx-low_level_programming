#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_c - this function prints a character
 * @c: the character to print
 * Return: void
 */
void print_c(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * print_s - this function prints a string
 * @s: the string to print
 * Return: void
 */
void print_s(va_list s)
{
	char *str = va_arg(s, char *);

	if (str == NULL)
	str = "(nil)";
	printf("%s", str);
}

/**
 * print_i - this function prints an integer
 * @i: the integer to print
 * Return: void
 */
void print_i(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
 * print_f - this function prints a float
 * @f: the float to print
 * Return: void
 */
void print_f(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * print_all - this function prints anything
 * @format: the list of argument types passed to the function
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, j = 0;
	char *separator = "";
	print_t print_funcs[] = {
	{"c", print_c},
	{"s", print_s},
	{"i", print_i},
	{"f", print_f},
	{NULL, NULL}
	};

	va_start(args, format);

	while (format && format[i])
	{
	j = 0;
	while (print_funcs[j].t)
	{
	if (*(print_funcs[j].t) == format[i])
	{
	printf("%s", separator);
	print_funcs[j].f(args);
	separator = ", ";
	break;
	}
	j++;
	}
	i++;
	}

	va_end(args);
	printf("\n");
}

