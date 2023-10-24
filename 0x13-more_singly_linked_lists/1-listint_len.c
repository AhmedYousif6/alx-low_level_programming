#include "lists.h"

/**
 * listint_len - find the length of nodes.
 * @h: pointer to the first node.
 * Return: count of nodes.
 */

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
