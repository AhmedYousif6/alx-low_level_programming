#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: first string
 * @src: second string
 * Return: dest
*/

char *_strcat(char *dest, char *src)
{
	char *result;
	int i = 0;
	int k = 0;

	while (dest[i] != '\0')
	{
		result[i] = dest[i];
	i++;
	}
	while (src[k] != '\0')
	{
		result[i + k] = src[k];
	k++;
	}
	result[i + k] = '\0';
	*dest = *result;
	return (dest);
}
