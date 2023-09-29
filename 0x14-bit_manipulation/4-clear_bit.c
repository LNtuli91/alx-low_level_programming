#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index
 * @n: The pointer to the number to change
 * @index: The index of the bit to clear
 *
 * Return: 1 for success, -1 for failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > 63)
		return (-1);

/*	*n = (-(1UL << index) & *n);*/
	mask = ~(1UL << index);
	*n &= mask;
	return (1);
}
