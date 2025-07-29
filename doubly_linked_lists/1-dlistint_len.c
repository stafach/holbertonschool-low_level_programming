#include "lists.h"

/**
*dlistint_len - returns the number of elements in a doubly linked list
*@h: the linked list
*Return: the number of elements
*/

size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;
	const dlistint_t *node = malloc(sizeof(dlistint_t));

	if (node == NULL)
		return (0);

	for (node = h; node != NULL; node = node->next)
		i++;

	free((void *)node);
	return (i);
}
