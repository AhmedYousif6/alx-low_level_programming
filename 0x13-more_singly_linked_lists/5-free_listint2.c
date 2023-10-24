#include "lists.h"

/**
 * free_listint2 - function that free the list
 * and set the head to null.
 * @head: pointer to the first node.
 * Return: nothing.
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp = *head;
	listint_t *ptr;

	while (tmp != NULL)
	{
		ptr = tmp->next;
		free(tmp);
		tmp = ptr;
	}
	*head = NULL;
}
