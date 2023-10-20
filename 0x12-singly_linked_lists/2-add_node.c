#include "lists.h"

/**
 * add_node - add node to  the start of a linked list.
 * @head: pointer to first node.
 * @str: string of node
 * Return: size of list.
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (!head || !new)
		return (NULL);
	if (str)
	{
		new->str = strdup(str);
		if (!new->str)
		{
			free(new);
			return (NULL);
		}
		new->len = strlen(new->str);
	}
	new->next = *head;
	*head = new;
	return (new);
}
