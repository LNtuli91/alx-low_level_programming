#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - prints the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int result;
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	if (sscanf(argv[1], "%d", &num1) != 1 || sscanf(argv[2], "%d", &num2) != 1)
	{
		printf("Error\n");
		return (1);
	}

	result = num1 * num2;
	printf("%d\n", result);
	return (0);
}
