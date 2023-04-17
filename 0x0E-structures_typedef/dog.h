#ifndef DOG
#define DOG
/**
 * struct dog - a simple dog struct
 *
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 */
struct dog
{
char *name;
float age;
char *owner;
};

/**
 * init_dog - initialize a dog struct with the given data
 *
 * @d: a pointer to the dog struct to initialize
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * print_dog - print the name, age, and owner of a dog struct
 *
 * @d: the dog struct to print
 */
void print_dog(struct dog *d);

/**
 * dog_t - a typedef for struct dog
 */
typedef struct dog dog_t;

/**
 * new_dog - creates a new dog struct with the given data
 *
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: a pointer to the new dog struct
 */
dog_t *new_dog(char *name, float age, char *owner);

/**
 * free_dog - free the memory allocated to a dog struct
 *
 * @d: the dog struct to free
 */
void free_dog(dog_t *d);

#endif
