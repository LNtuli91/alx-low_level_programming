#include "main.h"
#include <stdio.h>

/**
 * void reverse_array - reverse array of itegers
 * @a: array
 * @n: number ofelement of array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
 		a[n] = j;
	}		
}
