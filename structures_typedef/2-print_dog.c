#include "dog.h"
#include <stdio.h>

/**
*print_dog - print a struct dog
*@d: pointer to the struc
*Return: Nothing
*/

void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("\n");

	if (d->name == NULL)
		printf("Name: (nil)\n");

	if (d->age == 0.0)
		printf("Age: (nil)\n");

	if (d->owner == NULL)
		printf("Owner: (nil)\n");

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
