#include "main.h"

/**
 * print_diagonal - printing lines diagonal
 * @n: input variable
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int p, q;

	if (n <= 0)
		_putchar('\n');
	for (p = 0; p < n; p++)
	{
		for (q = 0; q <= p; q++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
