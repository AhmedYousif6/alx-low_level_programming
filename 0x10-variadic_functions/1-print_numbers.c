#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: string between numbers
 * @n: number of parameters
 * Return: nothing
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int k = 0;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		k = va_arg(args, int);
		printf("%d", k);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
