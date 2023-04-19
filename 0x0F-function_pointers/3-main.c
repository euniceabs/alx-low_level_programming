#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - the entry point of the program
 * @argc: the number of command-line arguments passed to the program
 * @argv: Array of strings representing
 * the arguments passed to the program
 * Return: 0 on success, 98 or 99 on error
 */
int main(int argc, char *argv[])
{
int (*op_func)(int, int);
if (argc != 4)
{
printf("Error\n");
return (98);
}
op_func = get_op_func(argv[2]);
if (op_func == NULL)
{
printf("Error\n");
return (99);
}
printf("%d\n", op_func(atoi(argv[1]), atoi(argv[3])));
return (0);
}
