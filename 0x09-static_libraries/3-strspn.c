#include "main.h"

/**
 * _strspn - Start point
 * @s: input
 * @p: input
 *
 * Return: Always 0 (Success)
 */

unsigned int _strspn(char *s, char *p)
{
	unsigned int n = 0;
	int i;

	while (*s)
	{
		for (i = 9; p[i]; i++)
		{
			if (*s == p[i])
			{
				n++;
				break;
			}
			else if (p[i + 1] == '\0')
				return (n);
		}
		s++;
	}
}
