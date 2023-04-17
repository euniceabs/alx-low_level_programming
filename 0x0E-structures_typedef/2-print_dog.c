#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints the details of a dog
 * @d: pointer to the dog structure
 * Description: this function prints the name,
 * age, and owner of the dog structure.
 * Return: 0
 */
void print_dog(struct dog *d)
{
if (d != NULL)
{
if (d->name != NULL)
{
printf("Name: %s\n", d->name);
}
else
{
printf("Name: (nil)\n");
}
printf("Age: %.6f\n", d->age);
if (d->owner != NULL)
{
printf("Owner: %s\n", d->owner);
}
else
{
printf("Owner: (nil)\n");
}
}
}
