#include "lists.h"

/**
*free_list - free a linked list
*@head: head list
*Return: Nothing
*/

void free_list(list_t *head)
{

	if (head == NULL)
		return;

	while (head->next != NULL)
	{
		free(head->str);
		free(head);
	}
}
