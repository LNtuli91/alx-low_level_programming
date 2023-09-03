#include "main.h"

/**
 * _strlen - returns size of string
 * @s: string
 *
 * Return: size
 */

int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}

	return (l);
}
