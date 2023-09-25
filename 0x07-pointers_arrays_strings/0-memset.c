#include "main.h"

/**
 * _memset - set an value
 * @s: takes string
 * @b: takes character to set into string
 * @n: number of bites
 * Return: pointer to string
*/

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}
