#include "main.h"

/**
 * print_most_numbers - prens base 10 digits
 * use _putchar func to print
 * exept 2, 4 from print
 * Return: void
*/

void print_most_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		if (i == 2 || i == 4)
		{
			i++;
		}
		_putchar(i + 48);
		i++;
	}
	_putchar('\n');
}
