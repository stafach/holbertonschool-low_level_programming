#include "lists.h"

/**
*get_dnodeint_at_index - return the index nood
*@head: the list
*@index: the index
*Return: NULL or the nood
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n = 0;

	if (head == NULL)
		return (NULL);

	while (n < index)
	{
		head = head->next;
		n++;
	}

	return (head);
}
