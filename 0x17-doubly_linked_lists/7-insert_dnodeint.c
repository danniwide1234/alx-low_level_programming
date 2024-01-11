#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node at
 * a given position
 *
 * @h: list head
 * @idx: new node index
 * @n: new node value
 * Return: new node address, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *fresh;
	dlistint_t *head;
	unsigned int j;

	fresh = NULL;
	if (idx == 0)
		fresh = add_dnodeint(h, n);
	else
	{
		head = *h;
		j = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
		while (head != NULL)
		{
			if (j == idx)
			{
				if (head->next == NULL)
					fresh = add_dnodeint_end(h, n);
				else
				{
					fresh = malloc(sizeof(dlistint_t));
					if (fresh != NULL)
					{
						fresh->n = n;
						fresh->next = head->next;
						fresh->prev = head;
						fresh->next->prev = fresh;
						fresh->next = fresh;
					}
				}
				break;
			}
			head = head->next;
			j++;
		}
	}

	return (fresh);
}
