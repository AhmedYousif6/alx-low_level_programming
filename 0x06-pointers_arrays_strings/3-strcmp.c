#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: k
*/

int _strcmp(char *s1, char *s2)
{
	int k = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			k = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
	}
	return (k);
}
