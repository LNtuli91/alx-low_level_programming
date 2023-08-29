#include "main.h"
#include <stddef.h>

/**
 * _strstr - function finds the first occurrence of the substring
 * @haystack: The terminating null bytes
 * @needle: 2nd The terminating null bytes
 *@return A pointer to the beginning of the located substring, or NULL
 * Returns: Always 0 (Success)
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}
		if (needle[j] == '\0')
		{
			return (&haystack[i]);
		}
	}
	return (NULL);
}

