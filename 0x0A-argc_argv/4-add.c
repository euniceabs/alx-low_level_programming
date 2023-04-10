#include "main.h"

/**
 * main - adds positive numbers
 * @argc: the argument count
 * @argv: the array of argument
 * Return: 0 if no errors, otherwise
 */
int main(int argc, char *argv[])
{
int i, p, sum = 0;
if (argc < 1)
printf("0\n");
for (i = 1; i < argc; i++)
{
for (p = 0; argv[i][p]; p++)
{
if (!isdigit(argv[i][p]))
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}





