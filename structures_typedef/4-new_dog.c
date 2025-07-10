#include "dog.h"
#include <stdlib.h>

/**
**new_dog - creates a new dog.
*@name: name of the new dog
*@age: age of the new dog
*@owner: owner of the new dog
*Return: NULL
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(struct dog));
	dog_t *newname;
	dog_t *newowner;

	if (new_dog == NULL)
		return (NULL);

	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
	
	newname = malloc(sizeof(owner));
	newowner = malloc(sizeof(name));
	
	if (newname == NULL)
		return (NULL);
	
	if (newowner == NULL)
		return (NULL);

	return (new_dog);
}
