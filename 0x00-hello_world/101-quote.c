#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints with write function
 *
 * Return: Always 1
*/

int main(void)
{
	write(2,"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",59);
	return (1);
}
