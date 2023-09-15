#include "main.h"

/**
 * print_number - print an integer
 * @n: the integer to be printed
*/

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	if (num > 9)
	{
		_putchar((num / 10) + 48);
		_putchar((num % 10) + 48);
	}
}
