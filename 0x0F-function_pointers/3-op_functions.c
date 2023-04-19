#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - a function that calculates the sum of integers a and b
 * @a: the first integer
 * @b: the second integer
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
return (a + b);
}
/**
 * op_sub - a function that calculates the difference of integers a and b
 * @a: the first integer
 * @b: the second integer
 * Return: the difference of a and b
 */
int op_sub(int a, int b)
{
return (a - b);
}
/**
 * op_mul - a function that multiplies the integers a and b
 * @a: the first integer
 * @b: the second integer
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
return (a * b);
}
/**
 * op_div - function that calculates the quotient of integers a and b
 * @a: the first integer
 * @b: the second integer
 * Return: the quotient of a and b
 */
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}
/**
 * op_mod - a function that calculates the remainder of the division of a by b
 * @a: the first integer
 * @b: the second integer
 * Return: the remainder of the division of a by b
 */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
