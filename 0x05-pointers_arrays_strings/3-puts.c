#include "main.h"

/**
 * _puts - prints a string followed by new line
 * @str: takes string
 * Return: void
*/

void _puts(char *str)
{
	int i;

	for (i = 0; *str != '\0'; i++)
	{
		_putchar(i + 0);
	}
	_putchar('\n');
}
