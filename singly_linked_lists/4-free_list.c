#include "lists.h"

/**
*free_list - free a linked list
*@head: head list
*Return: Nothing
*/

void free_list(list_t *head)
{
	list_t *tmp, *new;

	if (head == NULL)
		return;

	for (new = head; new->next != NULL; new = new->next)
	{
		free(new->str);
		tmp = new;
		free(tmp);
	}
	free(new);
}
