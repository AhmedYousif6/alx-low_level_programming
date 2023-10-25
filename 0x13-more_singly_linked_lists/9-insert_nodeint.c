#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node at given place by index.
 * @head: points to the first node.
 * @idx: index number, start from 0.
 * @n: data of the node.
 * Return: adrress of the new node or null if its fail.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *tmp;
	unsigned int count = 0;

	if (!head || !new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!idx)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	tmp = *head;
	while (tmp)
	{
		if (count == idx - 1)
		{
			new->next = tmp->next;
			tmp->next = new;
			return (new);
		}
		count++;
		tmp = tmp->next;
	}
	free(new);
	return (NULL);
}
