#include <stdio.h>
#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: The number to seacrch
 * @index: The index of bit
 *
 * Return: Value of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int val;

	if (index > 63)
		return (-1);

	val = (n >> index) & 1;

	return (val);
}
