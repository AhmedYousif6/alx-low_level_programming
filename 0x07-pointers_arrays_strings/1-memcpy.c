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
	int i,j;

	for (i = 0, j = 0; n > 0; i++, j++, n--)
	{
		dest[i] = src[j];
	}
	return (dest);
}
