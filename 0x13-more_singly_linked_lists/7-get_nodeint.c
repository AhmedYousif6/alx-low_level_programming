#include "lists.h"

/**
 * get_nodeint_at_index - returns a node of a given index.
 * @head: points to the first node.
 * @index: index of the nodes, start from 0.
 * Return: null if the node dose not exist
 * or the node of the given index.
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int l;
	listint_t *tmp;

	for (tmp = head, l = 0; tmp && l < index; tmp = tmp->next, l++)
		;
	return (node);
}
