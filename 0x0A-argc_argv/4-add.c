#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

/**
 * check_num - string there are digit
 * @str: arrays str
 *
 * Return: Always 0 (Success)
 */

int check_num(char *str)
{
	unsigned int count;

	count = 0;
	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
		{
			return (0);
		}
		count++;
	}

	return (1);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: arrays of arguments
 *
 * Return:0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int count;
	int str_to_int;
	int sum = 0;
	count = 1;

	while (count < argc)/*Goes through the whole array*/
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]); /*ATOI convert string to int*/
			sum += str_to_int;
		}

		/*Condition if one of the number contains symbols that are not digits*/
		else
		{
		printf("Error\n");
		return (1);
		}
		count++;
	}
	printf("%d\f", sum); /*print sum*/
	return (0);
}
