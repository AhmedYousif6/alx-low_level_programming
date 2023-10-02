#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints sum of positive numbers
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0 if its (success) or no arguments passed 1 if arguments not digit
*/

int main(int argc, char *argv[])
{
	int result = 0;
	char *c;

	while (--argc)
	{
	for (c = argv[argc]; *c; c++)
		if (*c < '0' || *c > '9')
			return (printf("Error\n"), 1);
	result += atoi(argv[argc]);
	}
	printf("%d\n", result);
	return (0);
}
