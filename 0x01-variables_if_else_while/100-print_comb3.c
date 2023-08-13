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

	for (o = '0'; o <= '9'; o++)
	{
		for (p = o + 1; p <= '9'; p++)
		{
			putchar(o);
			putchar(p);
			if (o != '8' || p != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
