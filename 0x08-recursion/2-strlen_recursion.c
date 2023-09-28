#include "main.h"

/**
 * _strlen_recursion - find the length
 * @s: takes a string
 * Return: count
*/

int _strlen_recursion(char *s)
{
	int count = 1;

	if (*s > '\0')
	{
		_strlen_recursion(s + 1);
		count++;
	}
	return (count);
}
