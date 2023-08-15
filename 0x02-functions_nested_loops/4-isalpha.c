#include "main.h"

/**
 * _isalphac - Checks for alphabetic c character
 * @c: The character to be checked
 *
 * Return: for alphabetic c character or 0 for anything else
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
