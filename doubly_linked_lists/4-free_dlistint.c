#include "lists.h"

/**
*free_dlistint - free a double linked list
*@head: the list
*Return: Nothing
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
