#include "lists.h"

/**
*print_dlistint - prints all the elements of a doubly linked lists
*@h: the doubly linked list
*Return: NULL or the number of node
*/

size_t print_dlistint(const dlistint_t *h)
{
	int i;

	for (i = 0; h != NULL; h = h->next, i++)
	{
		printf("%d\n", h->n);
	}

	return (i);
}

