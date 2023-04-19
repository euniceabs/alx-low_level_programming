#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func - a function that searches for
 * the function corresponding to the operator
 * @s: the operator passed as argument to the program
 * Return: pointer to the function corresponding
 * to the operator given as parameter
*/
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i;
for (i = 0; ops[i].op != NULL; i++)
{
if (strcmp(s, ops[i].op) == 0)
return (ops[i].f);
}
return (NULL);
}
