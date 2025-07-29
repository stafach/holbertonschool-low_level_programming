#include "lists.h"

/**
*add_dnodeint - adds a new node at the beginning of a doubly linked list
*@head: the linked list
*@n: the new element of the node
*Return: NULL or the new node
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (head == NULL)
	{
		new_node->prev = NULL;
	}
	else
	{
		new_node->prev = new_node;
	}
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
