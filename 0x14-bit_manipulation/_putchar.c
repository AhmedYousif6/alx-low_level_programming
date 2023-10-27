#include "main.h"

/**
 * _putchar - prints characters.
 * @c: character to be printed.
 * Return: number of printed.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
