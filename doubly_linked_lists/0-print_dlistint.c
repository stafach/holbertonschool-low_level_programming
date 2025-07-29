#include "lists.h"

/**
*print_dlistint - prints all the elements of a doubly linked lists
*@h: the doubly linked list
*Return: NULL or the number of node
*/

size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;
	const dlistint_t *node = malloc(sizeof(dlistint_t));

	if (node == NULL)
		return (0);

	for (node = h; node != NULL; node = node->next, i++)
	{
		printf("%d\n", node->n);
	}

	free((void *)node);
	return (i);
}

