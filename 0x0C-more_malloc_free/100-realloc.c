#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates memory block
 * @ptr: pointer to old memory block
 * @old_size: size in bites for old memory block
 * @new_size: size in bites for new memory block
 * Return: pointer to reallocated memory or null
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *pt;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		pt = malloc(new_size);
		if (pt == NULL)
			return (NULL);
		return (pt);
	}
	if (new_size > old_size)
	{
		pt = malloc(new_size);
		if (pt == NULL)
			return (NULL);
		for (i = 0; i < old_size && i < new_size; i++)
			*((char *)pt + i) = *((char *)ptr + i);
		free(ptr);
	}
	return (pt);
}
