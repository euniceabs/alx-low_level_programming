#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array
 * @array: the array to search in
 * @size: the size of the array
 * @cmp: a pointer to the function to be used to compare values
 * Return: the index of the first element for which cmp returns non-zero,
 * returns non-zero or -1 if no element matches or if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size <= 0 || array == NULL || cmp == NULL)
return (-1);
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
return (-1);
}
