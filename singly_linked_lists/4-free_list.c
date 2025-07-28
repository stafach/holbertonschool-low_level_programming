#include "lists.h"

/**
*free_list - free a linked list
*@head: head list
*Return: Nothing
*/

void free_list(list_t *head)
{
	free(head->len);
	free(head->str);
	free(head);
}
