#include "lists.h"

/**
*list_len - returns the number of elements 
in a linked list
*@h: the list
*Return: 0 if NULL of the number of element
*/

size_t list_len(const list_t *h)
{
	int i = 0;
	const list_t *node = malloc(sizeof(list_t));

	if (node == NULL)
		return (0);

	for (node = h; node != NULL; node = node->next)
		i++;

	free((void*)node);
	return (i);
}
