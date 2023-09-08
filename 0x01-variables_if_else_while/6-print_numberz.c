#include <stdio.h>

/**
 * main - entry point
 *
 * description: print digits based 10 with putchar func
 *
 * Return: always 0 (success)
*/

int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar(i + '0');
		i++;
	}
	putchar('\n');

	return (0);
}
