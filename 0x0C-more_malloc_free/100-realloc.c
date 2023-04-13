#include "main.h"

/**
 * _realloc - a function that reallocates a memory block using malloc and free
 * @ptr: pointer to the previously allocated memory
 * @old_size:is the size of the previously allocated memory block
 * @new_size: the new size of the new memory block
 * Return: pointer to the new memory block, or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *p;
unsigned int j, n = new_size;
char *oldp = ptr;
if (ptr == NULL)
{
p = malloc(new_size);
return (p);
}
else if (new_size == 0)
{
free(ptr);
return (NULL);
}
else if (new_size == old_size)
return (ptr);
p = malloc(new_size);
if (p == NULL)
return (NULL);
if (new_size > old_size)
n = old_size;
for (j = 0; j < n; j++)
p[j] = oldp[j];
free(ptr);
return (p);
}
