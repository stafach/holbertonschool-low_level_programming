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
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int i, j;

	if (new_dog == NULL)
		return (NULL);

	while (name[len1] != '\0')
		len1++;

	new_dog->name = malloc(len1 + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	else
	{
		for (i = 0; i < len1; i++)
			new_dog->name[i] = name[i];
	}
	while (owner[len2] != '\0')
		len2++;

	new_dog->owner = malloc(len2 + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	else
	{
		for (j = 0; j < len2; j++)
			new_dog->owner[j] = owner[j];
	}
	new_dog->age = age;
	return (new_dog);
}
