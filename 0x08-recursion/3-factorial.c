#include "main.h"
#include <stdio.h>

/**
 * factorial - returns the factorial of a given number.
 * @n: number to be returnrd
 *
 * Return: Always 0 (Success)
 */

int factorial(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
	int result = 1;

	for (int i = 1; i <= n; ++i)
	{
	result *= i;
	}
	return (result);
	}
}
