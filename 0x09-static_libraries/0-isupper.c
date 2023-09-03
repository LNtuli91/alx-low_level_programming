#include "main.h"

/**
 * _isupper - check if uppercase latters
 * @c: check the character
 *
 * Return: if is a uppercase return 1, else return 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
