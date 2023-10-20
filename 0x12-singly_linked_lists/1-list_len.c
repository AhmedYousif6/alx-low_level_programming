#include "lists.h"

/**
 * list_len - find the length of a linled list.
 * @h: pointer to the first node.
 * Return: length of linked list.
*/

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
