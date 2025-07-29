#include "lists.h"

/**
*list_len - returns the number of elements in a linked list
*@h: the list
*Return: 0 if NULL of the number of element
*/

size_t list_len(const list_t *h)
{
	int i;

	for (i = 0; h != NULL; h = h->next)
		i++;

	return (i);
}
