#include <stdio.h>
#include <stdlib.h>

/**
 * main - print multiplication of two numbers
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0 if arguments two numbers 1 if its not two
*/

int main(int argc, char *argv[])
{
	int num1 = 0;
	int num2 = 0;
	int result = 0;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		result = num1 * num2;
		printf("%d\n", result);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
