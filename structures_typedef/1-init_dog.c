#include "main.h"
#include "dog.h"
#include <stdlib.h>
/**
*init_dog - define the dog's informations
*@d: the structure
*@name: name of the dog
*@age: age of the dog
*@owner: name of the owner
*Return: Nothing
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
