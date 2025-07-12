#include "main.h"
#include <stdlib.h>

/**
**_realloc - reallocates a memory block
*@ptr: the pointer to reallocate
*@old_size: the old allocate mem
*@new_size: the new allocate mem
*Return: NULL or ptr
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	char *src;
	char *dest;
	unsigned int i;
	unsigned int min;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		return (malloc(new_size));

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
	{
		free (new_ptr);
		return (NULL);
	}

	if (old_size < new_size)
		min = old_size;

	else
		min = new_size;

	src = (char *) ptr;
	dest = (char *) new_ptr;

	for (i = 0; i < min; i++)
		dest[i] = src[i];

	free(ptr);
	return (new_ptr);
}
