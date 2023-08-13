#include <stdio.h>

/**
 * main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int o;
	int p;
	int q;

	for (o = 0; o <= 7; o++)
	{
		for (p = o + 1; p <= 9; p++)
		{
			for (q = p + 1; q <= 9; q++)
			{
				putchar(o + '0');
				putchar(p + '0');
				putchar(q + '0');

				if (o != 7 || p != 8 || q != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

