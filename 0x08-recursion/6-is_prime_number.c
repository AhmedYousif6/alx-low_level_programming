#include "main.h"

int prime(int n, int i);

/**
 * is_prime_number - find prime number
 * @n: takes number
 * Return: integer
*/

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	else
	{
		return (prime(n, 2));
	}
}

/**
 * prime - help function to find prime number
 * @n: takes number
 * @i: integer
 * Return: integer
*/

int prime(int n, int i)
{
	if (n % i == 0)
	{
		return (0);
	}
	else if (i * i > n)
	{
		return (1);
	}
	else
	{
		return (prime(n, i + 1));
	}
}
