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
	printf("Size of a char: 1 %ld byte(s)\n", sizeof(char));
	printf("Size of an int: 4 %ld byte(s)\n", sizeof(int));
	printf("Size of a long int: 4 %ld bytes(s)\n", sizeof(long int));
	printf("Size of a long long int: 8 %ld byte(s)\n", sizeof(long long int));
	printf("Size of a float: 4 %ld byte(s)", sizeof(float));
	return (0);
}
