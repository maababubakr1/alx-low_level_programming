#ifndef DOG_H
#define DOG_H

#include <stdlib.h>

/**
 *struct dog - A struct for basic dog info
 *@name: dog's name
 *@age: dog's age
 *@owner: dog's owner
 *Description - long description
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif
