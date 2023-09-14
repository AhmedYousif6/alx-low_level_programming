#include "main.h"

/**
 * _isdigit - check if the input is digit base 10
 *
 * @c: digit input for func
 *
 * Return: 1 if its digit 0 if not
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
