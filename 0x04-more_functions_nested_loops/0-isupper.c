#include "main.h"

/**
 * _isupper - check if the character is upper
 *
 * @c: input alphabet for function
 *
 * Return: 1 if its upper 0 if not
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
