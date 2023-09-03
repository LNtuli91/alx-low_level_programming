#include "main.h"

/**
 * _isalpha - checks for alphabet
 * @s: The chacter to be checked
 *
 * Return: 1 if s is letter, else 0
 */

int _isalpha(int s)
{
	return ((s >= 'a' && s <= 'z') || (s >= 'A' && s <= 'Z'));
}
