#include "main.h"
/**
 * _puts_recursion - Prints a string, followed by a newline, using recursion
 * @s: Pointer to the string to print
 * Return: void
 */

void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
_puts_recursion(s + 1);
}
