#include "main.h"

/**
 * print_diagonal - print \ for n times
 * @n: input times that \ will print
 * Return: void
*/

void print_diagonal(int n)
{
	int i, s;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (i = 1; i <= n; i++)
	{
		for (s = 1; s <= i; s++)
		{
			_putchar(' ');
		}
			_putchar(92);
			_putchar('\n');
	}
	}
}
