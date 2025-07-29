#include "lists.h"

/**
*print_list - prints all the elements of a linked list
*@h: the list
*Return: NULL or the number of nodes
*/

size_t print_list(const list_t *h)
{
	int i = 0;
	const list_t *node = malloc(sizeof(list_t));

	if (node == NULL)
		return (0);

	for (node = h; node != NULL; node = node->next, i++)
	{
		if (node->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", node->len, node->str);
		}
	}
	free((void *)node);
	return (i);
}
