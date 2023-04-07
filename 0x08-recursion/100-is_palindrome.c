#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - a function that checks if a string is a palindrome
 * @s: string to check
 * Return: 1 if s is a palindrome, 0 if otherwise
 */

int is_palindrome(char *s)
{
if (*s == '\0')
return (1);
return (is_palindrome(s, 0, _strlen_recursion(s)));
}
/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: string to calculate the length of
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}
/**
 * check_palindrome - checks the characters recursively for palindrome
 * @s: string to check
 * @i: number to interate
 * @len: length of the string
 * Return: 1 if s is a palindrome, 0 if otherwise
 */
int check_palindrome(char *s, int i, int len)
{
if (*(s + i) != *(s + len - 1))
return (0);
if (i >= len)
return (1);
return (check_palindrome(s, i + 1, len - 1));
}
