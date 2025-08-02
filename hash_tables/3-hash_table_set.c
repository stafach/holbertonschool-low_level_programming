#include "hash_tables.h"

/**
*create_node - create a new node
*@key: the key of the node
*@value: the value to the node
*Return: the node or 0
*/

hash_node_t *create_node(const char *key, const char *value)
{
	char *dup_key, *dup_value;
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);

	dup_key = strdup(key);
	if (dup_key == NULL)
	{
		free(node);
		return (0);
	}

	dup_value = strdup(value);
	if (dup_value == NULL)
	{
		free(dup_key);
		free(node);
		return (0);
	}

	node->key = dup_key;
	node->value = dup_value;
	return (node);
}

/**
*hash_table_set - adds an element to the hash table.
*@ht: the hash table
*@key: the key
*@value: the value
*Return: 1 if it succeeded, 0 otherwise
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *current, *new_node;
	unsigned long int idx;
	char *dup_value;

	if (key == NULL || ht == NULL || value == NULL)
		return (0);
	if (*key == '\0')
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	current = ht->array[idx];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			dup_value = strdup(value);
			if (dup_value == NULL)
				return (0);

			free(current->value);
			current->value = dup_value;
			return (1);
		}
		current = current->next;
	}
	new_node = create_node(key, value);
	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;
	return (1);

}
