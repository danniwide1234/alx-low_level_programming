#include "search_algos.h"

/**
 * linear_skip - search for a value in a skip list
 *
 * @list: input list
 * @value: value to search in
 * Return: index number
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *gone;

	if (list == NULL)
		return (NULL);

	gone = list;

	do {
		list = gone;
		gone = gone->express;
		printf("Value checked at index ");
		printf("[%d] = [%d]\n", (int)gone->index, gone->n);
	} while (gone->express && gone->n < value);

	if (gone->express == NULL)
	{
		list = gone;
		while (gone->next)
			gone = gone->next;
	}

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)list->index, (int)gone->index);

	while (list != gone->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)list->index, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
	}

	return (NULL);
}
