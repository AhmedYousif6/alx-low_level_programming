#include "main.h"

/**
 * _strlen_recursion - find the length
 * @s: takes a string
 * Return: count
*/

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s > '\0')
	{
		count += _strlen_recursion(s + 1) + 1;
	}
	return (count);
}
