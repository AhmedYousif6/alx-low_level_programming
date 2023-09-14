#include "main.h"

/**
 * main - prints number from 1 to 100
 * replace multiples of 3 with Fizz
 * multiples of 5 with Buzz
 * multiples of 3 and 5 with FizzBuzz
 * Return: Always 0 (success)
*/

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
