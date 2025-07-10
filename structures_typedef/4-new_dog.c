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
	
	if (name == NULL || age == 0
		|| owner == NULL)
		return (NULL);

	if (new_dog == NULL)
		return (NULL);

	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
	
	return (new_dog);
}
