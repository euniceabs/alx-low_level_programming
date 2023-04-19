#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes - this function prints the opcodes of this program
 * @a: the address of the main function
 * @n: the number of bytes to print
 * Return: void
 */
void print_opcodes(char *a, int n)
{
int j;
for (j = 0; j < n; j++)
{
printf("%.2hhx", a[j]);
if (j < n - 1)
printf(" ");
}
printf("\n");
}

/**
 * main - this function prints the opcodes of its own main function
 * @argc: the number of arguments passed to the function
 * @argv: an array of pointers to arguments
 * Return: always 0
 **/
int main(int argc, char **argv)
{
int k;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
k = atoi(argv[1]);
if (k < 0)
{
printf("Error\n");
exit(2);
}
print_opcodes((char *)&main, k);
return (0);
}
