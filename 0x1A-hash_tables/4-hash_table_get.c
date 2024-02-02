#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: hash table pointer
 * @key: The key to get the value of.
 *
 * Return: NULL if key cannot be matched
 *         Otherwise - the value associated with key in ht.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int position;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	position = key_index((const unsigned char *)key, ht->size);
	if (position >= ht->size)
		return (NULL);

	node = ht->array[position];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	return ((node == NULL) ? NULL : node->value);
}
