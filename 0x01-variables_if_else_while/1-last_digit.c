#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assign a random number to the variable n
 *
 * main = Entry point
 *
 * This program will assign a random number to the variable n each time.
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	int m;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	m = n % 10;
	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	if (n < 6 && m != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
	if (n == 0)
		printf("Last digit of %d is %d and is 0\n", n, m);
	return (0);
}
