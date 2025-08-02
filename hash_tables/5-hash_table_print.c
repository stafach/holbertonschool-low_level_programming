#include "hash_tables.h"

/**
*hash_table_print - print a hash table
*@ht: the hash table
*Return: Nothing
*/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx;
	hash_node_t *node;

	if (ht == NULL)
		return;

	printf("{");
	for (idx = 0; idx < ht->size; idx++)
	{
		node = ht->array[idx];
		while (node != NULL)
		{
			if (node == ht->array[idx])
				printf(", ");

			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
		}
	}
	printf("}\n");
}
