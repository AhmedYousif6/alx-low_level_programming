#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: the size of triangle
 * Return: void
*/

void print_triangle(int size)
{
	int i, s;

	for (i = 1; i <= size; i++)
	{
		for (s = 1; s <= size; s++)
		{
			if ((i + s) <= size)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}
