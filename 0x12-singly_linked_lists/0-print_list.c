#include <lists.h>

/**
 * print_list - print a linked list.
 * @h: pointer to the first node.
 * Return: size of the linked list.
*/

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d] &s\n", strlen(h->str), h->str ? h->str : "(nil)";
				h = h->next;
				i++;
	}
	return (i);
}
