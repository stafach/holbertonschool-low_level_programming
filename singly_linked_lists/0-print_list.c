#include "lists.h"

/**
*print_list - prints all the elements of a linked list
*@h: the list
*Return: NULL or the number of nodes
*/

size_t print_list(const list_t *h)
{
	int i;

	for (i = 0; h != NULL; h = h->next, i++)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
	}

	return (i);
}
