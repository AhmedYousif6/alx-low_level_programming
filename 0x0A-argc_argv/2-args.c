#include <stdio.h>

/**
 * main - prints all passed arguments
 * @argc: size of passed arguments
 * @argv: passed arguments
 * Return: 0 always (success)
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
