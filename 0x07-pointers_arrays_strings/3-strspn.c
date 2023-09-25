#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: takes string1
 * takes string2
 * Return: integer
*/

unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (i);
}
