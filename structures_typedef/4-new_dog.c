#include "dog.h"
#include <stdlib.h>

/**
*size - calcule the size of a string array
*@s: the array
*Return: the size of the array
*/

int size(char *s)
{
	int len = 0; 

	if (s == NULL)
		return (0);

	while (s[len] != '\0')
		len++;

	return (len);
}

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
	unsigned int len1 = size(name);
	unsigned int len2 = size(owner);
	unsigned int i, j;

	if (name == NULL || owner == NULL)
		return (NULL);

	if (new_dog == NULL)
		return (NULL);

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
	new_dog->name[i] = '\0';

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
	new_dog->owner[j] = '\0';
	new_dog->age = age;
	return (new_dog);
}
