#include "main.h"

/**
 * main - entry point
 *
 * Description: print sum of previous tow numbers 50 times
 *
 * Return: always 0 (success)
*/

int main(void)
{
	int prev1 = 1;
	int prev2 = 2;
	int current = 0;
	int i;

	printf("%d, %d", prev1, prev2);
	for (i = 2; i < 50; i++)
	{
		current = prev1 + prev2;
		printf("%d", current);

		if (i != 49)
		{
			printf(", ");
		}
		prev1 = prev2;
		prev2 = current;
	}
	printf("\n");
	return (0);
}
