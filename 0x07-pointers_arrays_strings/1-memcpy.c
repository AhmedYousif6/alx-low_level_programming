#include "main.h"

/**
 * _memcpy - copy string
 * @dest: destenation string
 * @src: source string
 * @n: bites will be copy
 * Return: pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
