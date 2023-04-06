#include "main.h"

/**
 * find_mul - support function to find multipliers of n
 * @n: the number to be checked
 * @j: the number to iterate
 * Return: 1 if n is a prime number and 0 if not
 */
int find_mul(int n, int j)
{
if (j == n)
{
return (1);
}
else if (n % j == 0)
{
return (0);
}
else
{
return (find_mul(n, j + 1));
}
}
/**
 * is_prime_number - a function that checks if a given number is prime or not
 * @n: the number to be checked
 * Return: 1 if n is a prime number and 0 if not
 */
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
else
{
return (find_mul(n, 2));
}
}
