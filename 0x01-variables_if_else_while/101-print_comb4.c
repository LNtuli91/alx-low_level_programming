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

				if (o != '7' || p != '8' || q != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
}

/**
 * main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	putchar_combinations();
	putchar('\n');
	return (0);
}

