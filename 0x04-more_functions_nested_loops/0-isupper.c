#include "main.h"

/**
 * _isupper - Checks for uppercase character.
 * @n: The character to be checked
 * Return: 1 for uppercase character or 0 for anything els
 */

int _isupper(int n)
{
	if (n >= 65 && n <= 90)
	{
		return (1);
	}
	return (0);
}
