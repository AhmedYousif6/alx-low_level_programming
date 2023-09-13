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
	long prev1 = 1;
	long prev2 = 2;
	long current = 0;
	int i;

	printf("%ld, %ld", prev1, prev2);
	printf(", ");
	for (i = 3; i <= 50; i++)
	{
		current = prev1 + prev2;
		printf("%ld", current);

		if (i != 50)
		{
			printf(", ");
		}
		prev1 = prev2;
		prev2 = current;
	}
	printf("\n");
	return (0);
}
