#include "main.h"

/**
 * _abc - computes the absolute value of an integer
 *
 * @n: takes integer type input for func
 *
 * Return: Always 0 (success)
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
