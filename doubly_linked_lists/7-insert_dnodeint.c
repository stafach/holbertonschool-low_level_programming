#include "lists.h"

/**
*insert_dnodeint_at_index - insert a new node at a given position
*@h: the linked list
*@idx: the given position
*@n: the new value to add
*Return: NULL or the new node's adress
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *tmp;
	unsigned int j = 0;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	tmp = *h;
	while (tmp != NULL && j < idx - 1)
	{
		tmp = tmp->next;
		j++;
	}

	if (tmp == NULL)
		return (NULL);

	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));

	new_node->next = tmp->next;
	tmp->next = new_node;
	new_node->prev = tmp;
	tmp->next->prev = new_node;
	return (new_node);
}
