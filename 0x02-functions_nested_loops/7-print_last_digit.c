#include "main.h"

/**
 * print_last_digit - print last digit of a number
 *
 * @n: takes number input
 *
 * Return: r*/

int print_last_digit(int n)
{
	int r;

	if (r < 0)
		r = -1 * (n % 10);
	else
		r = n % 10;
	_putchar(r + '0');
	return (r);
}
