#include <stdio.h>

/**
 * main - entry point
 *
 * description: prints alphabet but no e and q
 *
 * Return: always 0 (success)
*/

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c == 'e' || c == 'q')
			c++;
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
