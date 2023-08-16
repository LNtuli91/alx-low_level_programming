#include <stdio.h>
/**
 * main - Prints the sum of all the multiples of 3 or 5 below 1024
 *
 * Return: Always o
 */

int main(void)
{
	int i, sum = 0;

	/* Loop through all numbers from 0 to 1023*/
	for (i = 0; i < 1024; i++)
	{
		/* Check if the number is a multiple of 3 or 5*/
		if (i % 3 == 0 || i % 5 == 0)
			sum += i; /* Add the number to the sum*/
	}

	/* Print the sum of all multiples of 3 or 5 below 1024*/
	printf("%d\n", sum);

	return (0);
}
