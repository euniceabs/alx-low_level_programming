#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - this function frees the memory allocated for a dog structure.
 * if the pointer to the dog is null, nothing happens.
 * @d: Pointer to the dog to free.
 * Return: void
 */
void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);
free(d->owner);
free(d);
}
}
