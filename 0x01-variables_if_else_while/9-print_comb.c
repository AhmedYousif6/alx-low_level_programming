#include <stdio.h>

/**
 * main - entry point
 *
 * description: print digits based 10 seperated by comma
 *
 * Return: always 0 (success)
*/

int main(void)
{
	int d = 0;

	while (d <= 9)
	{
		putchar(d + 48);
		if (d != 9)
		{
			putchar(',');
			putchar(' ');
		}
		d++;
	}
	putchar('\n');

	return (0);
}
