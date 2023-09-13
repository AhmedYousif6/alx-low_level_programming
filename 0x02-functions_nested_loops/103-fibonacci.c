#include "main.h"

/**
 * main - entry point
 *
 * Description: print the sum of even values in fibonocci sequinse
 *
 * Return: always 0 (success)
*/

int main(void)
{
	int prev1 = 1;
	int prev2 = 2;
	int sum = 0;
	int current;

	while (prev2 <= 4000000)
	{
		if (prev2 % 2 == 0)
		{
		sum += prev2;
		printf("%d", sum);
		}
	current = prev1 + prev2;
		prev1 = prev2;
		prev2 = current;
	}
	printf("\n");
	return (0);
}
