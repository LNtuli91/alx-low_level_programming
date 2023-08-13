#include <unistd.h>

#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	for (int i = 0; i < 100; i++)
	{
		for (int j = i + 1; j < 100; j++)
		{
			my_putchar(i / 10 + '0');
			my_putchar(i % 10 + '0');
			my_putchar(' ');
			my_putchar(j / 10 + '0');
			my_putchar(j % 10 + '0');
			my_putchar(',');
			my_putchar(' ');
		}
	}
	return (0);
}

