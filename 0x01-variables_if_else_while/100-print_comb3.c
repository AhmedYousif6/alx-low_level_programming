#include <stdio.h>

/**
 * main - entry point
 *
 * description: print two numbers
 *
 * Return: always 0 (success)
*/

int main()
{
	int i = 0, j = 1;

	while (i < 10)
	{
		while (j < 10)
		{
			putchar(i + '0');
			putchar(j + '0');
		if (i != 8 || j != 9)
		{
			putchar(',');
			putchar(' ');
		}
		j++;
		}
		i++;
		j = i + 1;
	}
	putchar('\n');
	return (0);
}
