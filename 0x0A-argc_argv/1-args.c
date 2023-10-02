#include <stdio.h>

/**
 * main - print number of passed arguments
 * @argc: number of passed argument
 * @argv: passed arguments
 * Return: 0 always (success)
*/

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc);
	return (0);
}
