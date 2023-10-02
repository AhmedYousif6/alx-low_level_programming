#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 * to make change for an amount of money
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0 if success 1 if its error
*/

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int i, cash = atoi(argv[1]);
		int change = 0;
		int cents[] = {25, 10, 5, 2, 1};

		for (i = 0; i < 5; i++)
		{
			if (cash >= cents[i])
			{
				change += cash / cents[i];
				cash = cash % cents[i];
				if (cash % cents[i] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", change);
	}
		else
		{
			printf("Error\n");
			return (1);
		}
		return (0);
}
