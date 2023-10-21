#include "lists.h"

/**
 * add_node_end - add node at the end of list.
 * @head: pointer to head node.
 * @str: string of node.
 * Return: size of list.
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	list_t *node = *head;

	if (!head || !new)
		return (NULL);
	if (str)
	{
		new->str = strdup(str);
		if (!new->str)
		{
			free(new->str);
			free(new);
			return (NULL);
		}
		new->len = strlen(new->str);
	}
	if (node)
	{
		while (node->next)
			node = node->next;
		node->next = new;
	}
	else
		*head = new;
	return (new);
}
