#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocate memory and set it to 0
 * @nmemb: number of elemants
 * @size: number of bites
 * Return: void pointer or null on failure
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned char *a;
	unsigned int i, total = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	total = nmemb * size;
	ptr = malloc(total);
	if (ptr == NULL)
		return (NULL);
	a = (unsigned char *)ptr;
	for (i = 0; i < total; i++)
		a[i] = 0;
	return (ptr);
}
