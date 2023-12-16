#include "lists.h"

/**
 * find_listint_loop - Function that finds the loop in a linked list
 * @head: linked list to be search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *sluggish = head;
	listint_t *quick = head;

	if (!head)
		return (NULL);

	while (sluggish && quick && quick->next)
	{
		quick = quick->next->next;
		sluggish = sluggish->next;
		if (quick == sluggish)
		{
			sluggish = head;
			while (sluggish != quick)
			{
				sluggish = sluggish->next;
				quick = quick->next;
			}
			return (quick);
		}
	}

	return (NULL);
}
