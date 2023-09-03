#include "main.h"

/**
 * _strcmp - compare strings value
 * @s: 1rst input value
 * @s1: 2nd input value
 *
 * Return: s[i] - s2[i]
 */

int _strcmp(char *s, char *s1)
{
	int i;

	i = 0;
	while (s[i] != '\0' && s1[i] != '\0')
	{
		if (s[i] != s1[i])
		{
			return (s[i] - s1[i]);
		}
		i++;
	}
	return (0);
}
