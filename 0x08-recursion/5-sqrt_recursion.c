#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - the natural square root of a number.
 * @n: the number
 *
 * Return: Always 0 (Success)
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		int i = 1;

		while (i * i <= n)
		{
			++i;
		}
		--i;
		if (i * i == n)
		{
			return (i);
		}
		else
		{
		return (-1);
		}
	}
}
