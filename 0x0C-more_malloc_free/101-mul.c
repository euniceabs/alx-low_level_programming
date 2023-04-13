#include "main.h"

/**
 * _print - a function that moves a string to the left by one position
 * and then displays the resulting string
 * @str: the string to move
 * @l: the size of the string
 * Return: void
 */
void _print(char *str, int l)
{
int p, s;
p = s = 0;
while (p < l)
{
if (str[p] != '0')
s = 1;
if (s || p == l - 1)
_putchar(str[p]);
p++;
}
_putchar('\n');
free(str);
}
/**
 * mul - a function that multiplies a character with a string
 * and stores the result in dest
 * @n: the character to multiply
 * @num: the string to multiply
 * @num_index: last non NULL index of num
 * @dest: the destination of multiplication
 * @dest_index: highest index in dest to start adding the result
 * Return: pointer to dest, or NULL on failure
 */
char *mul(char n, char *num, int num_index, char *dest, int dest_index)
{
int i, q, mul, mulrem, add, addrem;

mulrem = addrem = 0;
for (i = num_index, q = dest_index; i >= 0; i--, q--)
{
mul = (n - '0') * (num[i] - '0') + mulrem;
mulrem = mul / 10;
add = (dest[q] - '0') + (mul % 10) + addrem;
addrem = add / 10;
dest[q] = add % 10 + '0';
}
for (addrem += mulrem; q >= 0 && addrem; q--)
{
add = (dest[q] - '0') + addrem;
addrem = add / 10;
dest[q] = add % 10 + '0';
}
if (addrem)
{
return (NULL);
}
return (dest);
}
/**
 * check_for_digits - checks if the arguments are digits
 * @av: the pointer to arguments
 * Return: 0 if the arguments are digits, 1 if they are not
 */
int check_for_digits(char **av)
{
int p, s;

for (p = 1; p < 3; p++)
{
for (s = 0; av[p][s]; s++)
{
if (av[p][s] < '0' || av[p][s] > '9')
return (1);
}
}
return (0);
}
/**
 * init - a function that initializes a string
 * @str: the string to initialize
 * @l: the length of string
 * Return: void
 */
void init(char *str, int l)
{
int p;
for (p = 0; p < l; p++)
str[p] = '0';
str[p] = '\0';
}
/**
 * main - the entry point for program to multiply two numbers
 * @argc: the number of arguments passed to the program
 * @argv: the array of pointers to the arguments passed to the program
 * Return: 0 on success, 98 on failure
 */

int main(int argc, char *argv[])
{
int l1, l2, ln, si, i = 0;
char *z;
char *s;
char u[] = "Error\n";
if (argc != 3 || check_for_digits(argv))
{
for (si = 0; u[si]; si++)
_putchar(u[si]);
exit(98);
}
for (l1 = 0; argv[1][l1]; l1++)
;
for (l2 = 0; argv[2][l2]; l2++)
;
ln = l1 + l2 + 1;
z = malloc(ln *sizeof(char));
if (z == NULL)
{
for (si = 0; u[si]; si++)
_putchar(u[si]);
exit(98);
}
init(z, ln - 1);
for (si = l2 - 1, i = 0; si >= 0; si--, i++)
{
s = mul(argv[2][si], argv[1], l1 - 1, z, (ln - 2) - i);
if (s == NULL)
{
for (si = 0; u[si]; si++)
_putchar(u[si]);
free(z);
exit(98);
}
}
_print(z, ln - 1);
return (0);
}
