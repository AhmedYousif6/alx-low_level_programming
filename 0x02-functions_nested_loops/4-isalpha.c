#include "main.h"

/**
 * _isalpha - check the alpha both lower and upper
 *
 * @c: take input from other func
 *
 * Return: 1 if c is true 0 else*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
