#include "lists.h"

/**
*free_list - free a linked list
*@head: head list
*Return: Nothing
*/

void free_list(list_t *head)
{
	list_t new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		tmp = *head;

		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		free(tmp);
	}
	free(new_node);
}
