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
			if (j <= 8)
			{
				putchar(',');
				putchar(' ');
			}
			if (i == 0 && j == 9)
			{
				break;
			}
		}
	}
	putchar('\n');
	return (0);
}
