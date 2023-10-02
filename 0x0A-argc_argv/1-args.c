#include <stdio.h>

/**
 * main - print number of passed arguments
 * @argc: number of passed argument
 * @argv: passed arguments
 * Return: 0 always (success)
*/

int main(int argc, char const *argv[])
{
	int c = argc - 1;

	(void)argv;
	printf("%d\n", c);
	return (0);
}
