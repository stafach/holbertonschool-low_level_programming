#include "lists.h"

/**
*sum_dlistint - add the value of a integer of a doubly linked list
*@head: the linked list
*Return: 0 or the sum of all the values
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
