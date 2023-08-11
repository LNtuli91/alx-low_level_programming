#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * main - A c program that prints exactly a line, to the standard error.
 * Return: always 1 (Success)
 */

int main(void)
{

	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);

}
