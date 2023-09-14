#include "main.h"

/**
 * print_diagonal - print \ for n times
 * @n: input times that \ will print
 * Return: void
*/

void print_diagonal(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('\\');
			_putchar('\n');
		}
	}
}
