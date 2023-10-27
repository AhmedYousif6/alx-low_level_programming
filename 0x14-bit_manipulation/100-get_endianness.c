#include "main.h"

/**
 * get_endianness - return endianness of system.
 * Return: 0 if big or 1 if small.
 */
int get_endianness(void)
{
	unsigned long int a = 1;

	return (*(char *)&a);
}
