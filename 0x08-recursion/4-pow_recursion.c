#include "main.h"

/**
 * _pow_recursion - calculate the power of an integer
 * @x: takes the base number
 * @y: takes the exponent
 * Return: -1 if its negative number or the power of the number
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
