#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: takes string
 * @accept: takes string to search in s
 * Return: pointer to the same index or null if not found
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] == s[i]; j++)
		{
			return (s + i);
		}
	}
	return ('\0');
}
