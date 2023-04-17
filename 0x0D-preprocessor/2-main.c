#include <stdio.h>
/**
 * main - the main function prints the name of the file
 * followed by a new line
 * Return: 0
 */
int main(void)
{
const char *filename = __FILE__;
printf("%s\n", filename);
return (0);
}
