#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: A pointer to a hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *node, *storage;
	unsigned long int t;

	for (t = 0; t < ht->size; t++)
	{
		if (ht->array[t] != NULL)
		{
			node = ht->array[t];
			while (node != NULL)
			{
				storage = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = storage;
			}
		}
	}
	free(head->array);
	free(head);
}
