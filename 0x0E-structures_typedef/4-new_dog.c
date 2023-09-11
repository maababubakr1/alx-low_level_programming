#include "dog.h"

/**
 *new_dog - A function that creates a new dog
 *@name: name of new dog
 *@age: age of new dog
 *@owner: owner of new dog
 *Return: A pointer to the new dog (Success), otherwise NULL (Error)
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *c_name, *c_owner;
	int l_name = 0, l_owner = 0, i;

	if (name == NULL || owner == NULL)
		return (NULL);

	while (name[l_name])
		l_name++;
	while (owner[l_owner])
		l_owner++;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	c_name = malloc(l_name + 1);
	if (c_name == NULL)
		return (NULL);
	for (i = 0; name[i]; i++)
		c_name[i] = name[i];
	c_name[i] = '\0';

	c_owner = malloc(l_owner + 1);
	if (c_owner == NULL)
		return (NULL);
	for (i = 0; owner[i]; i++)
		c_owner[i] = owner[i];
	c_owner[i] = '\0';

	new_dog->name = c_name;
	new_dog->age = age;
	new_dog->owner = c_owner;
	return (new_dog);
}
