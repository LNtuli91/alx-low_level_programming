#include <stdio.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = i; j < 10; j++)
		{
			putchar(j + '0');
			if (i != 8 || j != 9)
			{
				putchar(',');
			}
		}
	}
	putchar('\n');
	return (0);
}