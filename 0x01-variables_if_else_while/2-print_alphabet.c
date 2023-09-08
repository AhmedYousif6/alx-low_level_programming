#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints alohabet in lower case
 *
 * Return: 0 (success)
*/

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
