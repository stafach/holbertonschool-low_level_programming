#ifndef DOG_H
#define DOG_H

#include "main.h"
/**
* struct dog - take the personal information of a dog
*@name: the name of the dog
*@age: the age of the dog
*@owner: the owner of the dog
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
