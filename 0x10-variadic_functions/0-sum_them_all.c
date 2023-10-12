#include "variadic_functions.h"
#include <stdarg.h>


/**
 * sum_them_all - sum all parameters
 * @n: number of parameter
 * Return: sum of all or null if no parameter
*/

int sum_them_all(const unsigned int n, ...)
{
	int k = 0, sum = 0;
	unsigned int i;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		k = va_arg(args, int);
		sum += k;
	}
	va_end(args);
	return (sum);
}
