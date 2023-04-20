#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: the number of parameters
 * Return: the sum of all numbers
 */
int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int j;
int sum = 0;

va_start(ap, n);

for (j = 0; j < n; j++)
{
sum += va_arg(ap, int);
}

va_end(ap);

return (sum);
}
