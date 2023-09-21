#include "main.h"

/**
 * leet - encodes a string into 1337
 * @ch: takes string
 * Return: pointer of string
*/

char *leet(char *ch)
{
	char *ptr = ch;
	char letter[] = {'A', 'E', 'O', 'T', 'L'};
	int value[] = {4, 3, 0, 7, 1};
	unsigned int i;

	while (*ch)
	{
		for (i = 0; i < sizeof(letter) / sizeof(char); i++)
		{
			if (*ch == letter[i] || *ch == letter[i] + 32)
			{
			*ch = 49 + value[i];
			}
		}
	ch++;
	}
	return (ptr);
}
