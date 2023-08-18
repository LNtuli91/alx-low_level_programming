#include "main.h"

/**
 * print_triangle - entry point
 * description: print triangle of #
 * @size: size of triangle
 * Return: void
 */
i
void print_triangle(int size)
{
	int row, hashes, space;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (spaces = size - row; spaces >= 1; space--)
			{
				_putchar(' ');
		}
		for (hashes = 1; hashes <= row; hashes++)
		{
			_putchar('#');
		}
		_putchar('\n');
		}
	}
}
