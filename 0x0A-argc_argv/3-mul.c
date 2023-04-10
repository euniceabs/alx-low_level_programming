#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point of the program
 * @argc: the argument count
 * @argv: the array of argument
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
int i, p, s;
i = 1;
p = 2;
s = 3;
if (argc != s)
{
printf("Error\n");
return (1);
}
printf("%d\n", atoi(argv[i]) * atoi(argv[p]));
return (0);
}





