#include "lists.h"

int _strlen(const char *str);

/**
*_strlen - calculate the sizae of a string
*@str: the string
*Return: NULL or the size of the string
*/

int _strlen(const char *str)
{
	int len = 0;

	if (str == NULL)
		return (0);

	while (str[len] != '\0')
		len++;

	return (len);

}

/**
*add_node - adds a new node at the beginning of a linked list
*@head: the list
*@str: the new node
*Return: NULL or the adress of the new element
*/


list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (0);
	}

	new_node->len = _strlen(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
