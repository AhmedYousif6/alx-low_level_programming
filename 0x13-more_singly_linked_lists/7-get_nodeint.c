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
	unsigned int count = 0;
	listint_t *tmp;
	
	if (!head)
		return (NULL);
	tmp = head;
	while (count != index)
	{
		tmp = tmp->next;
		count++;
	}
	if (tmp != NULL)
		return (tmp);
	else
		return (NULL);
}
