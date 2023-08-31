#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - function that returns the values
 * @x: value to be raised
 * @y: power value
 *
 * Return: Always 0 (Success)
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
