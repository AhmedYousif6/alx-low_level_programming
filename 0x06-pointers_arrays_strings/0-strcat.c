#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: destination string
 * @src: source string
 * Return: dest
*/

char *_strcat(char *dest, char *src)
{
	int len1 = 0;
	int len2, i;

	while (*dest != '\0')
	{
		len1++;
		dest++;
	}
	len1++;

	len2 = 0;
	while (*src != '\0')
	{
		len2++;
		src++;
	}
	len2++;
	for (i = 0; i <= len2; i++)
	{
		dest[len1 + i] = src[i];
	}

	return (dest);
}
