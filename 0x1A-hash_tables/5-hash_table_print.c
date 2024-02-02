#include "hash_tables.h"

/**
 * hash_table_print - function that Prints a hash table.
 * @ht: hash table to print pointer.
 *
 * Description: key/value pairs printed in the order
 *              they appear in the array of the hash table.
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int f;
	unsigned char key_value = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (f = 0; f < ht->size; f++)
	{
		if (ht->array[f] != NULL)
		{
			if (key_value == 1)
				printf(", ");

			node = ht->array[f];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			key_value = 1;
		}
	}
	printf("}\n");
}
