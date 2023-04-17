#include <stdlib.h>
#include "dog.h"

/**
 * new_dog- creates a new dog with the given name, age, and owner.
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Return: On success, a pointer to the newly created dog structure.
 * On failure, NULL is returned.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
unsigned int name_len, owner_len, i;
dog_t *dog;
if (name == NULL || owner == NULL)
return (NULL);
dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
for (name_len = 0; name[name_len]; name_len++)
;
name_len++;
dog->name = malloc(name_len  *sizeof(char));
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
for (i = 0; i < name_len; i++)
dog->name[i] = name[i];
dog->age = age;
for (owner_len = 0; owner[owner_len]; owner_len++)
;
owner_len++;
dog->owner = malloc(owner_len  *sizeof(char));
if (dog->owner == NULL)
{
free(dog->name);
free(dog);
return (NULL);
}
for (i = 0; i < owner_len; i++)
dog->owner[i] = owner[i];
return (dog);
}
