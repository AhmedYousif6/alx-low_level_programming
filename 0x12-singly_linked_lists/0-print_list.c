#include "lists.h"

/**
 * _strlen - find the length of a string.
 * @ss: takes string.
 * Return: the length of the string.
 */

int _strlen(char *ss)
{
	int i = 0;

	if (!ss)
		return (0);
	while (*ss)
	{
		i++;
		ss++;
	}
	return (i);
}

/**
 * print_list - print a linked list.
 * @h: pointer to the first node.
 * Return: size of the linked list.
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		count++;
	}
	return (count);
}
