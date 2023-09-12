#include "main.h"

/**
 * _islower - check if its lower case
 *
 * Return: 1 if c is lower case character
 * 	0 otherwise (success)
*/

int _islower(int c)
{
	for (c >= 97 && c <= 122)
		return (1);
	return (0);
}
