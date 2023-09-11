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
	char *cname, *cowner;
	int lname = 0, lowner = 0, i;

	if (name == NULL || owner == NULL)
		return (NULL);

	while (name[lname])
		lname++;
	while (owner[lowner])
		lowner++;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	cname = malloc(lname + 1);
	if (cname == NULL)
		return (NULL);
	for (i = 0; i < name[i]; i++)
		cname[i] = name[i];
	cname[i] = '\0';

	cowner = malloc(lowner + 1);
		if (cowner == NULL)
			return (NULL);
	for (i = 0; i < owner[i]; i++)
		cowner[i] = owner[i];
	cowner[i] = '\0';

	new_dog->name = cname;
	new_dog->age = age;
	new_dog->owner = cowner;
	return (new_dog);
}
