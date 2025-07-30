#include "lists.h"

/**
*delete_dnodeint_at_index - deletes the node at index place in a liked list
*@head: the linked list
*@index: the position
*Return: 1 if succes or -1 if fail
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int n = 0;
	dlistint_t *tmp;

	if (head == NULL)
		return (-1);

	tmp = *head;
	while (tmp != NULL && n < index)
	{
		tmp = tmp->next;
		n++;
	}

	if (tmp == NULL)
		return (-1);

	if (tmp->prev != NULL)
		tmp->prev->next = tmp->next;
	else
		*head = tmp->next;

	if (tmp->next != NULL)
		tmp->next->prev = tmp->prev;


	free(tmp);
	return (1);
}
