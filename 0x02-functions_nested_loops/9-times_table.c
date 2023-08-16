#include "main.h"

/**
 * times_table - Prints the 9 times table
 * Return: empty output
 */

void times_table(void)
{
	int n, p, q, r, x;

	for (n = 0; n <= 9; n++)
	{
	for (p = 0; p <= 9; p++)
	{
	q = n * p;
	if (q > 9)
	{
	r = q % 10;
	x = (q - 0) / 10;
	_putchar(44);
	_putchar(32);
	_putchar(x + '0');
	_putchar(r + '0');
	}
	else
	{
	if (p != 0)
	{
	_putchar(44);
	_putchar(32);
	_putchar(32);
	}
	_putchar(q + '0');
	}
	}
	_putchar('\n');
	}
}
