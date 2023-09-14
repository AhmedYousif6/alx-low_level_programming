#include "main.h"

/**
 * print_square - print a square followed by a new line
 * @size: size of square to print
 * Return: void
*/

void print_square(int size)
{
	int i, s;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (s = 0; s < size; s++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
