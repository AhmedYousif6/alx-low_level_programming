#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at given place by index.
 * @head: points to the first node.
 * @index: number of index of nodes, start by 0.
 * Return: 1 on success, -1 on failure.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *ptr;
	unsigned int c = 0;

	if (!head || !*head)
		return (-1);

	if (!index)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	tmp = *head;
	while (tmp)
	{
		if (c == index)
		{
			ptr->next = tmp->next;
			free(tmp);
			return (1);
		}
		c++;
		ptr = tmp;
		tmp = tmp->next;
	}
	return (-1);
}
