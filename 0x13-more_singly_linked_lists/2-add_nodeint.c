#include "lists.h"

/**
 * add_nodeint - add node at the begining of the list.
 * @head: pointer to the first node.
 * @n: integer.
 * Return: adrress of the begining node.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *begin = malloc(sizeof(listint_t));

	if (!head || !begin)
	{
		return (NULL);
	}

	begin->n = n;
	begin->next = *head;
	*head = begin;
	return (begin);
}
