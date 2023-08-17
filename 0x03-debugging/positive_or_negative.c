#include "main.h"

/**
 * positive_or_negative - This file must test that the function 
 * @i: The number to be tested
 * Return: ...
 */

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is position\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
}
