#include <stdio.h>

/**
 * main - Entry point
 *
 * a C program that prints the size of various types on the computer.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: 1 byte(s)\n", sizeof(a));
	printf("Size of an int: 4 byte(s)\n", sizeof(b));
	printf("Size of a long int: %ld bytes(s)\n", sizeof(c));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(d));
	printf("Size of a float: 4 byte(s)", sizeof(f));
	return (0);
}
