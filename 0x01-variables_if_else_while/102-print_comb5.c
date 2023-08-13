#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int o;
	int p;
	int q;
	int r;

	for (o = 0; o <= 99; o++)
	{
		for (p = 0; p <= 99; p++)
		{
			r = p % 10;
			q = p / 10;
			putchar(r + '0');
			putchar(q + '0');
			putchar(' ');
			r = o % 10;
			q = o / 10;
			putchar(r + '0');
			putchar(q + '0');
			if (o != 99 || p != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
