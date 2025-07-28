#include "lists.h"

/**
*free_list - free a linked list
*@head: head list
*Return: Nothing
*/

void free_list(list_t *head)
{
	list_t *tmp;

	if (*head != NULL)
	{
		tmp = head;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
			free(tmp->str);
			free(tmp->len);
		}
		free(tmp);
}
