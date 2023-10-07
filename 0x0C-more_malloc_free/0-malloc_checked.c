#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - check the memory allocation
 * @b: number of elemants
 * Return: pointer to allocate memory or 98 on failure
*/

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
