#include "main.h"

/**
 * print_numbers - print base 10 digits with _putchar func
 * Return: void
*/

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + 48);
	}
	_putchar('\n');
}