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
	int i;

	for (i = 0; (i = 10); i++)
	{
		{
			putchar(i + '0');/* print the current number*/
			if (i <= 8)/* check if this is not the last combination*/
			{
				putchar(',');
				putchar(' ');
			}
			if (i == 9)/* check if this is the last combination*/
			{
				break;/* exit the inner loop*/
			}
		}
	}
	putchar('\n');
	return (0);
}
