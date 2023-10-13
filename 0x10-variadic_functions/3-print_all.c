#include "variadic_functions.h"


/**
 * format_char - char format
 * @separator: string to separate
 * @ap: parameter
 * Return: nothing
*/

void format_char(char *separator, va_list ap)
{
	printf("%s%c", separator, va_arg(ap, int));
}

/**
 * format_int - integer format
 * @separator: string to separate
 * @ap: parameter
 * Return: nothing
*/

void format_int(char *separator, va_list ap)
{
	printf("%s%d", separator, va_arg(ap, int));
}

/**
 * format_float - float format
 * @separator: string to separate
 * @ap: parameter
 * Return: nothing
*/

void format_float(char *separator, va_list ap)
{
	printf("%s%f", separator, va_arg(ap, double));
}

/**
 * format_string - string format
 * @separator: string to separate
 * @ap: parameter
 * Return: nothing
*/

void format_string(char *separator, va_list ap)
{
	char *str = va_arg(ap, char *);

	if (str == NULL)
		str = "(nil)";

	printf("%s%s", separator, str);
}

/**
 * print_all - prints all
 * @format: format of print
 * Return: nothing
*/

void print_all(const char * const format, ...)
{
	int i = 0, k;
	char *separator = "";
	va_list ap;

	token_t tokens[] = {
		{"c", format_char},
		{"i", format_int},
		{"f", format_float},
		{"s", format_string},
		{NULL, NULL}
	};

	va_start(ap, format);
	while (format && format[i])
	{
		k = 0;
		while (tokens[k].token)
		{
			if (format[i] == tokens[k].token[0])
			{
				tokens[k].f(separator, ap);
				separator = ", ";
			}
			k++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
