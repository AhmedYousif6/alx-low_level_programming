#include "lists.h"

/**
 * pop_listint - deletes the head node and return the head nodes data.
 * @head: point to the first node.
 * Return: 0 if the list emtpty or the data of first node.
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp = *head;
	int num;

	if (*head == NULL)
		return (0);

	else
	{
		num = tmp->n;
		*head = tmp->next;
		free(tmp);
		return (num);
	}
}
