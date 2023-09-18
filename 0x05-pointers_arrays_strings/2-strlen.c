#include "main.h"

/**
 * _strlen - count the length of a string
 * @s: takes string
 * Return: counter
*/

int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; s++)
		++counter;

	return (counter);
}
