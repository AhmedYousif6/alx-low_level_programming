#include "lists.h"

/**
 * free_listint2 - function that free the list
 * and set the head to null.
 * @head: pointer to the first node.
 * Return: nothing.
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t *ptr;

	if (!head)
		return;
	tmp = *head;
	while (tmp != NULL)
	{
		ptr = tmp;
		tmp = tmp->next;
		free(ptr);
	}
	*head = NULL;
}
