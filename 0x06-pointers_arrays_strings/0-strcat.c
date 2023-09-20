#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: destination string
 * @src: source string
 * Return: dest
*/

char *_strcat(char *dest, char *src)
{
	int l1, l2;

	l1 = 0;
	while (dest[l1])
	{
		l1++;
	}
	for (l2 = 0; src[l2] ; l2++)
	{
		dest[l1++] = src[l2];
	}

	return (dest);
}
