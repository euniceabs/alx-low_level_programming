#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a struct variable of type dog.
 * @d: a pointer to the struct dog to initialize
 * @name: the name to initialize
 * @age:  the age to initialize
 * @owner: the owner to initialize
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
d = malloc(sizeof(struct dog));
d->name = name;
d->age = age;
d->owner = owner;
}
