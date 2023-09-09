#include <stdio.h>

/**
 * main - entry point
 *
 * description: print munbers in two two digits
 *
 * Return: always 0 (success)
*/

int main(void)
{
	int digit1 = 0, digit2 = 0;

	while (digit1 < 100)
	{
		digit2 = digit1 + 1;

		while (digit2 < 100)
		{
		putchar(digit1 / 10 + '0');
		putchar(digit1 % 10 + '0');
		putchar(' ');
		putchar(digit2 / 10 + '0');
		putchar(digit2 % 10 + '0');

		if (digit1 != 98 || digit2 != 99)
		{
			putchar(',');
			putchar(' ');
		}
			digit2++;
		}
		digit1++;
	}
		putchar('\n');

		return (0);
}
