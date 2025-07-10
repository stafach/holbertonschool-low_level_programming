#include "dog.h"
#include <stdlib.h>

/**
*free_dog - free dogs
*@d: pointer to dog structur
*Return: Nothing
*/

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
