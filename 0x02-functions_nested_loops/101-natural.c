#include "main.h"

/**
 * main - entry point
 *
 * Description: print the sum of num multiples of 3, 9 less than 1024
 *
 * Return: always 0 (success)
*/

int main(void)
{
	int sum = 0;
	int i;

	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
		printf("%d\n", sum);
		return (0);
}
