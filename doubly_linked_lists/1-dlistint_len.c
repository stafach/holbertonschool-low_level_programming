#include "lists.h"

/**
*dlistint_len - returns the number of elements in a doubly linked list
*@h: the linked list
*Return: the number of elements
*/

size_t dlistint_len(const dlistint_t *h)
{
	int i;

	for (i = 0; h != NULL; h = h->next)
		i++;

	return (i);
}
