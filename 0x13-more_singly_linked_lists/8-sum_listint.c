#include "lists.h"

/**
 * sum_listint - return the sum of all data in nodes.
 * @head: points to the first node.
 * Return: 0 if the list empty
 * or the sum of all data.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
