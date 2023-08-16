#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int i, j, k;
	unsigned long int hi, hf, lo, lf;

	j = 1;
	k = 2;
	printf("%lu, %lu", j, k);
	for (i = 3; i <= 98; ++i)
	{
		if (k > 999999999)
		{
			hf = k / 1000000000;
			lf = k % 1000000000;
			hi = j + hf;
			lo = lf;
			printf(", %lu%09lu", hi, lo);
			j = hi;
			k = lo;
		}
		else
		{
			k += j;
			j = k - j;
			printf(", %lu", k);
		}
	}
	printf("\n");
	return (0);
}
