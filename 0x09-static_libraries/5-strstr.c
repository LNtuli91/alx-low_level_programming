#include "main.h"

/**
 * _strstr - Start point
 * @haystack: input
 * @needle: input
 *
 * Return: Always 0
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *s = haystack;
		char *p = needle;

		while (*s == *p && *p != '\0')
		{
			s++;
			p++;
		}
		if (*p == '\0')
			return (haystack);
	}
	return (0);
}
