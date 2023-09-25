#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: main string
 * @needle: substring
 * Return: pointer to beggining index or NULL if not found
*/

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && needle[j] != '\0')
		{
			j++;
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
	}
	return (NULL);
}
