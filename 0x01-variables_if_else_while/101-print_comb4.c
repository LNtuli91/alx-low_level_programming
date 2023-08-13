#include <stdio.h>
/**
 * putchar_combinations - Prints all combinations of three digits from 0 to 9
 */

void putchar_combinations(void)
{
	int o;
	int p;
	int q;

	for (o = '0'; o <= '9'; o++)
	{
		for (p = o + 1; p <= '9'; p++)
		{
			for (q = p + 1; q <= '9'; q++)
			{
				putchar(o);
				putchar(p);
				putchar(q);
				putchar(',');
				putchar(' ');
			}
		}
	}
}
#include <stdio.h>

/**
 * main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	putchar_combinations();
	return (0);
}

