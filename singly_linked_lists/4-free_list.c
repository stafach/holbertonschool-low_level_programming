#include "lists.h"

/**
*free_list - free a linked list
*@head: head list
*Return: Nothing
*/

void free_list(list_t *head)
{
	list_t *tmp;

	if (head == NULL)
	{
		free(head);
		return;
	}
	else
	{
		while (head != NULL)
		{
			tmp = head;
			head = head->next;
			free(tmp->str);
			free(tmp);
		}
	}
}
