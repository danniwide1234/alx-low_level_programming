#include "hash_tables.h"

/**
 * hash_table_set - function that Add or update an element in a hash table.
 * @ht: hash table pointer.
 * @key: added key - cannot be an empty string.
 * @value: The value associated with key.
 *
 * Return: Upon failure - 0.
 *         Otherwise - 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *fresh;
	char *value_copy;
	unsigned long int index, z;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (z = index; ht->array[z]; z++)
	{
		if (strcmp(ht->array[z]->key, key) == 0)
		{
			free(ht->array[z]->value);
			ht->array[z]->value = value_copy;
			return (1);
		}
	}

	fresh = malloc(sizeof(hash_node_t));
	if (fresh == NULL)
	{
		free(value_copy);
		return (0);
	}
	fresh->key = strdup(key);
	if (fresh->key == NULL)
	{
		free(fresh);
		return (0);
	}
	fresh->value = value_copy;
	fresh->next = ht->array[index];
	ht->array[index] = fresh;

	return (1);
}
