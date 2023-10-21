#include "lists.h"


void before_main(void) __atrribute__ ((constructor));

/**
 * before_main - execute before main.
 *
 * Return: nothing.
*/

void before_main(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
