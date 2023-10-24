#include "lists.h"

/**
 * add_nodeint_end - add node at the end of list.
 * @head: pointer point to the first node.
 * @n: integer.
 * Return: the adrress of the last node.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end = malloc(sizeof(listint_t));
	listint_t *ptr = *head;

	if (!head || !end)
	{
		return (NULL);
	}

	end->n = n;
	end->next = NULL;

	if (ptr)
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = end;
	}
	else
		*head = end;

	return (end);
}
