#include "main.h"

int sqrt2(int n, int i);

/**
 * _sqrt_recursion - find square root of a number
 * @n: takes number
 * Return: -1 if the number negative
 * the number if its 0 or 1
 * square of the number
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (sqrt2(n, 1));
	}
}

/**
 * sqrt2 - help function to find the square
 * @n: takes number
 * @i: posiable square
 * Return: -1 to indicate error or number
*/

int sqrt2(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	else
	{
		return (sqrt2(n, i + 1));
	}
}
