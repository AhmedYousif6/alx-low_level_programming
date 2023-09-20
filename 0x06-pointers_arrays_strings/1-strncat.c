#include "main.h"

/**
 * _strncat - concatenates two strings by the end of n
 * @dest: first string
 * @src: second string
 * @n: number of characters
 * Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int l, i;

	l = 0;
	while (dest[l])
	{
		l++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[l + i] = src[i];
		dest[l + i] = '\0';
	}
	return (dest);
}
