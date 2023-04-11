#include "main.h"

/**
 * create_array - allocates an array of characters of a given size,
 * and initializes all its elements to a given character.
 * @size: the size of the array to create
 * @c: the character to use for initialization
 * Return: a pointer to the newly created array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *arr;
if (size == 0)
{
return (NULL);
}
arr = malloc(size * sizeof(char));
if (arr == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
arr[i] = c;
}
return (arr);
}
