#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main = Entry point
 *
 * main = Checks if a number is positive or negative
 *
 * @n>0: positive number
 * @n<0: negative number
 * @n==0: zero number
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d ", n);
	if (n > 0)
		printf("is positive\n");
	else if (n == 0)
		printf("is zero\n");
	else
		printf("is negative\n");
	return (0);
}
