#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - length of a string
 * @s: string to be return
 *
 * Return: AAlways 0 (Success)
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (_strlen_recursion(s + 1) + 1);
	}
}
