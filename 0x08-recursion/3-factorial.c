#include "main.h"

/**
 * factorial - find factorial of given number
 * @n: takes number
 * Return: -1 to indecate error or integer factorial
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
