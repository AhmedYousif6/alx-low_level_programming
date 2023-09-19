#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generate random passwords for 101 crackme
 * Description: generate rand pass
 * Return: always 0 (success)
*/

int main(void)
{
	int sum;
	char c;

	srand(time(NULL));
	while (sum <= 2645)
	{
		c = rand() % 128;
		sum += c;
		putchar(c);
	}
	putchar(2272 - sum);
	return (0);
}
