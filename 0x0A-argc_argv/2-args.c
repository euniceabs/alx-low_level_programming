#include "main.h"

/**
* main - entry point of the program
* @argc: the argument count
* @argv: the array of argument
* Return: always 0 (success)
*/
int main(int argc, char *argv[])
{
int i = 0;
while (i < argc)
{
printf("%s\n", argv[i]);
i++;
}
return (0);
}
